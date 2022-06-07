#include <stdio.h>
#include "main.h"
/**
 * times_table - well i guess it is what it says
 * Return: 1
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (a == 0)
{
_putchar(c + '0');
}
if (c <= 9 && b != 0)
{
_putchar(c + '0');
_putchar(' ');
_putchar(' ');
_putchar(',');
}
if (c >= 9)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar(' ');
_putchar(',');
}
}
_putchar('\n');
}
}
