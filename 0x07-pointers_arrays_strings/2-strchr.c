#include "main.h"
/**
 * _strchr - Returns frist character of c
 * @s: String to be scanned
 * @c: character to search for
 * Return: 0
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
i++;
if (s[i] == c)
return (&s[i]);
}
return ('\0');
}
