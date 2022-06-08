#include <stdio.h>
#include "main.h"
/**
 * print_times_table - well this again
 * @n: integer placeholder
 * Return: 0
 */
void print_times_table(int n)
{
int x, z, i;
for (i = 0; i <= n; i++)
{
for (x = 0; x <= n; x++)
{
if (n < 0 || n > 15)
{
return;
break;
}
z = x * i;
if (x == 0)
{
_putchar(z + '0');
}
if (z < 10 && x != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
if (z >= 10 && z < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
else if (z >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
}
_putchar('\n');
}
return;
}
