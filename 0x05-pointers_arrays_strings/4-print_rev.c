#include "main.h"
/**
 * print_rev - Prints in reverse
 * @s: character placeholder
 * Return: 1
 */
void print_rev(char *s)
{
int a;
int x;
for (a = 0; s[a] != '\0'; a++)
{
}
for (x = a; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
return;
}
