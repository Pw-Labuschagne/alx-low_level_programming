#include "main.h"
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Number passed to be converted(string)
 * Return: Converted number,or 0 if more than one chars not base2 | b = o
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	if (b[i] == '1')
	{
		num = (num * 2) + 1;
	}
	else if (b[i] == '0')
	{
		num = (num * 2) + 0;
	}
}
return (num);
}
