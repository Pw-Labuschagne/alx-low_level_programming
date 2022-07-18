#include "lists.h"
/**
 * add_nodeint_end - Adds node at end of list
 * @head: Pointer to list
 * @n: Integer to be added
 * Return: Addres of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp = malloc(sizeof(listint_t));
listint_t *ptr = malloc(sizeof(listint_t));


if (*head == NULL)
{
	*head = ptr;
	ptr->n = n;
	ptr->next = NULL;
	return (ptr);
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
