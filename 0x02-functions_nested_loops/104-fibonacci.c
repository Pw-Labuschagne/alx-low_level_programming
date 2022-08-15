#include <stdio.h>

/**
 * main - prints the first 98 numbers in fibonnaci sequence
 * Return: 0 on succes
 */

int main(void)
{
	unsigned first, second, sum;
	int count;

	first = 1;
	second = 2;
	sum = first + second;

	printf("%u", sum);

	for (count = 1; count < 99; count ++)
	{
		first = second;
		second = sum;
		sum = first + second;
		printf(", %u", sum);
	}
	printf("\n");
	return (0);
}
