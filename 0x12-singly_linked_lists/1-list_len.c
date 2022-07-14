#include "main.h"
/**
 * list_len - Returns number of elements in a linked list list_t
 * @list_t: linked list provided
 * @h: pointer to 
 * Return: number of elements int list_t
 */
size_t list_len(const list_t *h)
{
	int counter = 0;
	
	if (h == NULL)
	{
		_putchar('0');
	}
	struct list_t *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
