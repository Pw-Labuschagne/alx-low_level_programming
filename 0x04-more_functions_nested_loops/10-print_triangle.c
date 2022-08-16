#include "main.h"
/**
 * print_triangle - Well it prints a triangle
 * @size: once again counter for size
 * Return: nothing
 */
void print_triangle(int size)
{
int x, y;
if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (y <= size - x)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
