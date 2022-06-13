#include "main.h"
/**
 * print_rev - Prints in reverse
 * @s: character placeholder
 * Return: 1
 */
void print_rev(char *s)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
}
x = x--;
while (x > 0)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
return;
}
