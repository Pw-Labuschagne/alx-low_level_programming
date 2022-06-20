#include "main.h"
/**
 * _strpbrk - searches for any set of bytes
 * @s: String to be checked
 * @accept: String containing machted characters
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
int i, c;
i = 0;
while (s[i] != '\0')
{
c = 0;	
while (accept[c] != '\0')
{
if (accept[c] == s[i])
{
return (&s[i]);
}
c++;
}
i++;
}
return ('\0');
}
