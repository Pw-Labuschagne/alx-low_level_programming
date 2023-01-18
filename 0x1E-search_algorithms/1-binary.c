#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/*
 *
 */
void Beautiful_array_print(int *size)
{
	int c;
	
	printf("Searching in array: %ls", size);
	for(c = 1; c < size; c++)
		printf(", %ls", size[c]);

	printf("\n");
}

int binary_search(int *array, size_t size, int value)
{

	int left = 0, right = (size - 1), *mid;
	
	if(array == NULL)
		return(-1);
	mid = array;

	while(left <= right)
	{
		Beautiful_array_print(*mid);

		mid = left + ((right - left) / 2);

		if(array[mid] == value)
			return(mid);
		else if(value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return(-1);


}
