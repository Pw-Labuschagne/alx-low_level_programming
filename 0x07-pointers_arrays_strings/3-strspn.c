#include "main.h"
/**
 * _strspn - Retruns lenght of inistial substring pointed to by *s
 * @s: string to be scanned
 * @accept: string containing the charcater to match
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c;
int i, r;
c = 0;
i = 0;
r = 0;
while (s[i] != '\0')
{
while (accept[r] != '\0')
{
if (accept[r] == s[i])
{
c++;
}
r++;
}
i++;
r = 0;
if (s[i] == ' ')
{
break;
}
}
return (c);
}

