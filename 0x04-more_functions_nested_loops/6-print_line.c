#include "main.h"
/**
 * print_line - functionsssss
 * @n: int
 * Return: 0
 */
void print_line(int n)
{
int c;
if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
for (c = 0; c < n; c++)
{
_putchar('_');
}
}
}
