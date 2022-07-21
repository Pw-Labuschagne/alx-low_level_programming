#include "main.h"
/**
 * binary_to_int - Converts binary to unsigned int
 * @b: Number passed to be converted(string)
 * Return: Converted number,or 0 if more than one chars not base2 | b = o
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;
	char str[] = b;

	while (str[i] != '\0')
	{
		if (str[i] != '1' || str[1] != '0' || b == NULL)
		{
			return (0);
		}

		i++;
	}

i = 0;
num = (0 * 2) + atoi(str[i]);

	while (str[i] != '\0')
	{
		num += (num * 2) + atoi(str[i]);
		i++;
	}
return (num);
}
