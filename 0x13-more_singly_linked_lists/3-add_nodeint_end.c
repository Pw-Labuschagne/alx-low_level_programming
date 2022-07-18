#include "lists.h"
/**
 * add_nodeint_end - Adds node at end of list
 * @head: Pointer to list
 * @n: Integer to be added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *tmp = malloc(sizeof(listint_t));

if (*head == NULL)
{
	return (NULL);
}

tmp = *head;

while (tmp->next != NULL)
{
	tmp = tmp->next;
}
tmp->next = ptr;
ptr->n = n;
ptr->next = NULL;

return (ptr);
}
