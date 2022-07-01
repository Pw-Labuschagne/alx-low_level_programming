#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two stings
 * @s1: String one
 * @s2: String two
 * @n: counter?
 * Return: 0
 */
int _sl(char *i) /** not allowdto use standard functions??*/
{
	int a;

	for (a = 0; s[i] != '\0'; a++)
		;
	return (a);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int z, x, y;

	if (s2 == NULL)
		s2 == "";
	if ( s1 == NULL)
		s1 == NULL;

	z = _sl(s1);
	x = _sl(s2);

	if (n < 1)
		x = n;
	c = malloc(z + 1 + 1);
if (c == NULL)
{
	return (NULL);
}
for (y = 0; y < z; y++)
{
	*(c + 1) = *(s1 + y);
}
for (y = 0; y < x; y++)
{
	*(c + (y + z)) = *(s2 + y);
	*(c + (y + x)) = '\0';
}
return (s);
}
