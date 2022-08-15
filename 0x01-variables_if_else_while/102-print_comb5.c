#include <stdio.h>
/**
 * main - getting tired of these things betty
 * Return: 0
 */
int main(void)
{
int a = 0, b = 0, i, c;

for (i = 0; i < 100; i++)
{
	if (b < 10)
	{
		for (c = 0; c < 100; c++)
		{
			_putchar('0');
			_pucchar(b);
			_putchar(' ');
			if (a < 10)
			{
				_pucthar('0');
			} 
			_putchar(a);
			a++
		}
	} else
	{
		_putchar(b);

