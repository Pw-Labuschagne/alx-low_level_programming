#include "main.h"
/**
 * puts_half - prints half of string
 * @str: The string
 * Return: 1
 */
void puts_half(char *str)
{
int i;
int c;
/*int x;*/
for (i = 0; str[i] != '\0'; i++)
{
}
if (((i % 2) == 0) && (i != 0))
{
for (c = ((i / 2) - 1); c <= i ; c++)
{
_putchar(str[c]);
}
}
else if (((i % 2) != 0) && (i != 0))
{
for (c = ((i - 1) / 2); c >= 0; c--)
{	
_putchar(str[c]);
}
}
_putchar('\n');
return;
}
