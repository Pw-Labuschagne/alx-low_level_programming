#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - all natural nums
 * @n: our counter
 * Return: 1
 */
void print_to_98(int n)
{
int z, x;
if (n <= 98)
{
for (z = n; z <= 98; z++)
{
if (z != 98)
{
_putchar(z);
_putchar(',');
_putchar(' ');
}
else if (z == 98)
{
_putchar(z);
_putchar('\n');
}
}
}
else if (n >= 98)
{
for (x = n; x >= 98; x--)
{
if (x != 98)
{
_putchar(x);
_putchar(',');
_putchar(' ');
}
else if (x == 98)
{
_putchar(x);
putchar('\n');
}
}
}
}
