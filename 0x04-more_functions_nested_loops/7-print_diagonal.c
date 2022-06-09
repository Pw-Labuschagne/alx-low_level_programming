#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints diagonal line
 * @n: placeholder for counter
 * Return: 1
 */
void print_diagonal(int n)
{
int i, c;
if (n > 0);
{
for (i = 0; i <=n; i++)
{
for (c = 0; c < i; c++)
{
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (i == 0);
{
_putchar('\n');
}
}
_putchar('\n');
}
}
