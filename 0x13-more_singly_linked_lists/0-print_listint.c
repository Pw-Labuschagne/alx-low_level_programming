#include "lists.h"
/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
return (c);
}
