#include "main.h"
/**
 * _strlen_recursion - Returns lenght of string
 * @s: String to be checked
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
static int i;
i = 0;
if (*s != '\0')
{
i++;
_strlen_recursion(++s);
}
return (i);
}
