#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Probably the memory space
 * @size: memory size specification
 * Return: noting
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *a;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((unsigned char *) a + i) = 0;

	return (a);
}
