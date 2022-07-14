#include "lists.h"
/**
 * print_list - Prints all elements of list_t
 * @list_t: The singley linked list supplied
 * @h: pointer to 
 * Return: Elements of a list being printed
 */

size_t print_list(const list_t *h)
{
unsigned int c = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		continue;
		c++;
	}
	else 
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
}
return (c);
}
