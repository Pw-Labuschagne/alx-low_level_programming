#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: Pointer to list
 * Return: Head node address
 */
void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (head == NULL)
	{
		return;
	}
	
	while (*head != NULL)
	{
		frees = (*head)->next;
		free(*head);
		*head = frees;
	}
	head = NULL;
}
