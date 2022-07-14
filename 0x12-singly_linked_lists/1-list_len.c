#include "lists.h"
/**
 * list_len - Returns number of elements in a linked list list_t
 * @h: pointer to list_t string
 * Return: number of elements int list_t
 */
size_t list_len(const list_t *h)
{
int i = 0;

if (h == NULL)
{
	return (0);
}

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);
}
