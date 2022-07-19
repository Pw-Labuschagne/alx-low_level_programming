#include "lists.h"
/**
 * pop_listint - Deletes head of node
 * @head: index to list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int sub;
	listint_t *m;

		if (head == NULL || *head == NULL)
		{
			return (0);
		}
sub = (*head)->n;
m = *head;
*head = (*head)->next;
free(m);
m = NULL;

return ((*head)->n);
}
