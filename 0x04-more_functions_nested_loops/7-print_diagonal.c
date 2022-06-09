#include "main.h"
/**
 * print_diagonal - some
 * @n: - variable
 *
 * Return: 0
 */
void print_diagonal(int n)
{
int x, i;
if (n > 0)
{
for (x = 1; x <= n; x++)
{
for (i = 1; i <= n; i++)
{
if (x == i)
{
_putchar(92);
break;
}
_putchar(' ');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
