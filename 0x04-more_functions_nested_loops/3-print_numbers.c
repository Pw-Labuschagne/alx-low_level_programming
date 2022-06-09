#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: 1;
 */
void print_numbers(void)
{
char i = 0;
while (i <= '9')
{
putchar(i + '0');
i++;
}
_putchar('\n');
return;
}
