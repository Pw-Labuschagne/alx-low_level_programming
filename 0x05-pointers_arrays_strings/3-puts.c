#include "main.h"
/**
 * _puts - displays string tio stout
 * @str - the string placeholder
 * Return: 1
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
return;
}
