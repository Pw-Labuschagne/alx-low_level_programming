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
	dlistin_t *new_e;
	new_e = malloc(sizeof(dlistint_t));

	if (new_e == NULL)
	{
		return (NULL);
	}

	new_e->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new_e;
		return (*head);
	}

	(*head)->prev = new_e;
	new_e->next = *head;
	*head = new_e;

	return (*head);
}
