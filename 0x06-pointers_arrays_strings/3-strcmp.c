#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: 0 or other numerical value
 */
int _strcmp(char *s1, char *s2)
{
int a = 0, b = 0;
while ((*s1[a] != '\0' && *s2[a] != '\0') && (*s1[b] == *s2[b]))
{
a++;
b++;
}
if (s1 == s2)
{
return (0);
}
else
{
return (s1 - s2);
}
}
