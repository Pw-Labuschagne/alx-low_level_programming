#include <stdio.h>
#include "main.h"
/**
 * print_times_table - well this again
 * @n: integer placeholder
 * Return: 0
 */
void print_times_table(int n)
{
int x, z;
if (n == 15 || n == 0)
{
return;
break;
}
for (x = 0; x < n; x++)
{
z = x * n;
if (z == 0)
{
_putchar(z + '0');
}
_putchar(',');
_putchar(' ');
_putchar(z + '0');
}
return;
}
