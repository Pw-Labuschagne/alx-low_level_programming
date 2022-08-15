#include <stdio.h>

/**
 * main - Prints the sum of enev numbers in fibbonaci sequence
 * with the value not exceeding 4 000 000
 * Return: 0 if succesful
 */

int main(void)
{
	unsigned int sum, first, second, counter, res;

	first = 0;
	second = 1;
	sum = first + second;

	for (counter = 0; counter < 33; counter++)
	{
		if ((sum % 2) == 0)
		{
			res += sum;
		}
		first = second;
		second = sum;
		sum = first + second;
	}
	printf("%u", res);
printf("\n");	
return (0);
}

