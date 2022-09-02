#include "lists.h"

/**
 * add_dnodeint - Adds new node at beghinning of list
 * dlistint_t: list
 * @head: head of the list
 * @n: Integer where node to be inserted
 * Return: Address of new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (*head);
}
