#include <stdio.h>
/**
 * main - getting tired of these things betty
 * Return: 0
 */
int main(void)
{
int  a, b, c, i;

b = 0;
a = 0;
for (i = 0; i < 99; i++)
{
	for (c = 0; c < (100 - i); c++)
	{
		if (a > 99)
			break;

		putchar((b / 10) + '0');
		putchar((b % 10) + '0');

		putchar(32);

		putchar((a / 10) + '0');
		putchar((a % 10) + '0');

		putchar(44);
		putchar(32);

		a++;
	}
b++;
a = b + 1;
}
putchar('\n');
return (0);
}
