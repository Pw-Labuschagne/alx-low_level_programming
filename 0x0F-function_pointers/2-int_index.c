#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for integer
 * @array: array to be supplied
 * @size: size of array
 * @cmp:function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0)
{
for (i = 0; i <= size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (0);
}
return (-1);
}


