#include "lists.h"

/**
 * print_dlist - Prints all elements of doubly linked list
 * @h: Pointer of linked list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t x = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->x);
			++x;
			h = h->next;
	}

	return (x);
}
