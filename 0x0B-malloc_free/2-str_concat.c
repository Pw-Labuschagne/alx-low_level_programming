#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Newly concatednated string or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c, d;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + a) != '\0')
		a++;
	while (*(s2 + b) != '\0')
		b++;
	s = malloc(a + b + 1);
	if (s == 0)
	{
		return (0);
	}
	for (c = 0; c < a; c++)
	{
		*(s + c) = *(s1 + c);
	}
	for (c = 0, d = a; c < b; c++, d++)
	{
		*(s + d) = *(s2 + c);
	}
	*(s + d) = '\0';
	return (s);
}
