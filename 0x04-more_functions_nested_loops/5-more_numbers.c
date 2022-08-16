#include "main.h"
/**
 * more_numbers - It is evebn more
 *
 * Return: 1
 */
void more_numbers(void)
{
int z, i;
for (i = 0; i < 15; i++)
{
	for (x = 1; x <= 10; x++)
	{
		if (z < 10)
		{
			_putchar(z);
		} else if (z > 10)
		{
			_putchar((z % 10) + '0');
		}
	}
}
_putchar('\n');
}
