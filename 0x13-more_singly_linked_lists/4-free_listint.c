#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: Pointer to list
 * Return: nothing
 */
void free_listint(list_t **head)
{
	listint_t *frees;
	for (frees = head; frees != NULL; frees = free->next)
	{
		free(frees->n);
		free(frees);
	}
}
