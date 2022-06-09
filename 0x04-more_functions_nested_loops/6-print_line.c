#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints a straight line
 * @n: place holder for a counter
 * Return: 1
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
while (n <=20)
{
_putchar('_');
}
}
_putchar('\n');
return;
}
