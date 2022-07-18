#include "lists.h"
/**
* free_listint2 - frees list.
* @head: pointer
*
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *next = NULL;
if (head == NULL)
return;
while (*head != NULL)
{
next = (*head)->next;
free(*head);
*head = next;
}
}
