#include "main.h"
/**
 * _strlen_recursion - Returns lenght of string
 * @s: String to be checked
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return(1 + _strlen_recursion(++s));
}
return (0);
}
