#include "lists.h"
/**
 * pop_listint - Deletes head of node
 * @head: index to list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *m;

		if (*head != 0)
		{	m = *head;
			n = (*head)->n;
			*head = (*head)->next;
			free(m);
			return (n);
		}
return (0);
}
