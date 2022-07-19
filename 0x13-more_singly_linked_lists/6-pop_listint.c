#include "lists.h"
/**
 * pop_listint - Deletes head of node
 * @head: index to list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	struct listint_s *m = *head;

		if (head == NULL)
		{
			return (0);
		}
		else
		{
			
			*head = (*head)->next;
			free(m);
		}
	return ((*head)->n);
}
