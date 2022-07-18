#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: Pointer to list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *frees;
	for (frees = head; frees != NULL; frees = frees->next)
	{
		free(frees->n);
		free(frees);
	}
}
