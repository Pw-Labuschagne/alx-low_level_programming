#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/*
 * linear_search - Linear search array for value
 * array: Array to search
 * size: Size of arrar(num elements)
 * value: Value to search for
 * Return: -1 if not found or array==NULL else value
*/

int linear_search(int *array, size_t size, int value)
{
	int num;
	size_t c;
	
	if(array == NULL)
		return(-1);

	for(c = 0; c < size; c++)
	{
		num = array[c];
		if(num == value)
		{
			printf("Value checked array[%ld] = [%d]\n", c, num);
			return(c);
			break;
		}
		else
			printf("Value checked array[%ld] = [%d]\n", c, num);
	}
return(-1);	
}
