#include "lists.h"
/**
 * lisint_len - Returns number of elements in list
 * @h: pointer to list
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
return (c);
}
