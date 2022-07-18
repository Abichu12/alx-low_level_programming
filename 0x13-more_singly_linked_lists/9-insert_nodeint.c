#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index -  inserts a new node
* @head: pointer
* @idx: index
* @n: value of the node
*
* Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *temp, *node;
if (head == NULL)
return (NULL);
if (idx)
{
temp = *head;
for (i = 0; i < idx - 1 && temp ; i++)
{
temp = temp->next;
}
if (!temp)
return (NULL);
}
node = (listint_t *)malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
node->next = temp->next;
temp->next = node;
return (node);
}
