#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value)
{
	int num;
	size_t c;

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
