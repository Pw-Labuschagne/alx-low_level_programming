#include "function_pointers"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - executes file given as parameter
 * @array: array of integers
 * @size: size of array
 * @action: function to point to
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if (array != NULL && size != 0)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
