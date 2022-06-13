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
for (i = 0; str[i] != '\0'; i++)
{
}
if ((i % 2) == 0)
{
for (c = 0; c <= (i / 2); c++)
{
_putchar(str[c]);
}
}
else if ((i % 2) != 0)
{
c = ((i -1) / 2);
_putchar(str[c]);
}
return;
}
