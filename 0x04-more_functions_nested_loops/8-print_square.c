#include "main.h"
/**
 * print_square - Prints a square
 * @size: Probably the count for size
 * Return: 1
 */
void print_square(int size)
{
int x, y;
if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
