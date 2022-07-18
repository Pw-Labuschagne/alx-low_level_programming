#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: Pointer to list
 * Return: Head node address
 */
void free_listint2(listint_t **head)
{
	listint_t *frees;

	while (head != NULL)
	{
		frees = *head;
		*head = frees->next;
		free(frees);
	}
	head = NULL;
}
