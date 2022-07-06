#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes file given as parameter
 * @array: array of integers
 * @size: size of array
 * @action: function to point to
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
if (array != NULL && size != 0)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
