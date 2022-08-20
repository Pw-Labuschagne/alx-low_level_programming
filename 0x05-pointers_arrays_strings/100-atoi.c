#include "main.h"
#include <limits.h>

/**
 * _atoi - function that converts string to integer
 * @s: String to be converted
 * Return: Converted string to integer
 */

int _atoi(char *s)
{
	int a, b, c, srt, i, num;
	unsigned int n;

	srt = 0;
	num = 0;
	i = 0;
	c = 0;

	while (*(s + c) < 48 || *(s + c) > 57)
	{
		if (*(s + c) == '-')
			i++;
		if (*(s + c) == '\0')
		{
			b = 0;
			n = b;
			return (b);
		}
		srt++;
		c++;
		if (c + 1 < c)
			return (0);
	while (*(s + c) >= 48 && *(s + c) <= 57)
	{
		c++;
		++num;
	}
	n = 0;
	for (a = srt; a < (num + srt); a++)
	{
		n = n * 10 + s[a] - '0';
		if (i % 2 != 0)
			n = -n;
		b = n;
	}
	}
return (b);
}
