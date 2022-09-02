#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head of list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;

	if (head == NULL)
		return;

	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
