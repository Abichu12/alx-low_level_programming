#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - deletes the head node
* @head: pointer
*
* Return: the head
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;
if (!*head)
return (0);
tmp = *head;
*head = tmp->next;
n = tmp->n;
free(tmp);
return (n);
}
