#include "lists.h"
/**
 * add_nodeint - Adds a integer to a list.(beginning)
 * @head: pointer to list
 * @n: Integer to add
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *ptr = malloc(sizeof(listint_t));

if (head == NULL)
	{
		return (0);
	}
if (n == NULL)
	{
		ptr->n = NULL;
		return (0);
	}
ptr->n = n;
ptr->next = NULL;

if (ptr == NULL);
{
	return (0);
}
ptr->next = *head;
*head = ptr;
return (ptr);
