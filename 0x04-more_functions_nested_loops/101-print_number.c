#include "main.h"

/**
 * rem - recursive method to find the length of the integer
 * @n: Input
 * Return: Length of integer
 */
void rem(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		rem(n / 10);
		_putchar((n % 10) + '0');
	} else
	{
		_putchar(n + '0');
	}
}

/**
 * print_number - It prints numbers
 * @n: The number supplied
 * Return: Nothing
 */
void print_number(int n)
{
	rem(n);
}
