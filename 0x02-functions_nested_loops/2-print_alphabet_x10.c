#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - 10 x 
 * Return: 1
 */
void print_alphabet_x10(void)
{
int q;
int i = 0;
while (i < 10)
{
for (q = 'a'; q <= 'z'; q++)
{
_putchar(q);
}
_putchar('\n');
i++;
}
return;
}
