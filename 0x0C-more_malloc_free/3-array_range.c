#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: min ammount
 * @max: max ammount
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *a;

	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min + 1;

	a = malloc(sizeof(int) * diff);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < diff; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
