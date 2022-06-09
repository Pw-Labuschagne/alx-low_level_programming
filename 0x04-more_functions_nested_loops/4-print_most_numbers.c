#include <stdio.h>
#include "main.c"
/**
 * print_most_numbers - well it prints most numbers
 * Return: 1;
 */
void print_most_numbers(void)
{
char c = '0';
while (c <= '9')
{
if (c != '2' && c != '4')
{
_putchar(c);
}
c++;
}
_putchar('\n');
}
