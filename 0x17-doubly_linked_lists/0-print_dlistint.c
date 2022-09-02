#include "lists.h"

/**
 * print_dlistint - Prints all elements of doubly linked list
 * @h: Pointer of linked list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
			++n;
			h = h->next;
	}

	return (n);
}
