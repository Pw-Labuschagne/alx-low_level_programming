#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - well the name
 * @x: parameter
 * Return: r
 */
int print_last_digit(int x)
{
int ld;
if (x < 0)
{
x = -x;
}
ld = x % 10;
if (ld < 0)
{
ld = -ld;
_putchar(ld + '0');
}
return (0);
}
