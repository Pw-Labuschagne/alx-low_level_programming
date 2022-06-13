#include "main.h"
/**
 * puts2 -Every secondchar of string
 * @str: The string
 * Return: 1
 */
void puts2(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
}
while ( x >= 0)
{
_putchar(str[x]);
x = x - 2;
}
return;
}
