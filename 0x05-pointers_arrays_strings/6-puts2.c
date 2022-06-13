#include "main.h"
/**
 * puts2 -Every secondchar of string
 * @str: The string
 * Return: 1
 */
void puts2(char *str)
{
int x;
int c = 0;
for (x = 0; str[x] != '\0'; x++)
{
}
x = x - 1;
while (c <= x)
{
_putchar(str[c]);
c = c + 2;
}
_putchar('\n');
return;
}
