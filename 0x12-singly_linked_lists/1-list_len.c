#include "main.h"
/**
 * list_len - Returns number of elements in a linked list list_t
 * @list_t: linked list provided
 * @h: pointer to 
 * Return: number of elements int list_t
 */
size_t list_len(const list_t *h)
{
int i = 0;

	while (h != NULL)
	{
		i++;
	}
return (i);
}
