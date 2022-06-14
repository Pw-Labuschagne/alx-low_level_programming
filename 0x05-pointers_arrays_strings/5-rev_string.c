#include "main.h"
/**
 * rev_string - Reversed string
 * @s: placeholder of string char
 * Return: 1
 */
void rev_string(char *s)
{
int x = 0, z = 0, left;
while (s[z] != '\0')
{
z++;
}
z = z - 1;
while (z > x)
{
left = s[z];
s[z--] = s[x];
s[x++] = left;
}
return;
}
