#include "lists.h"

/**
 * dlistint_len - get the length of nodes in a double linked list
 * @h: Head of list
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	int prt = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->prev != NULL && prt == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			prt = 1;
			i = 0;
		}
		h = h->next;
	}
	return (i);
}
