#include "main.h"
/**
 * more_numbers - It is evebn more
 *
 * Return: 1
 */
void more_numbers(void)
{
int z, i;
for (i = 0; i < 10; i++)
{
	for (z = 0; z < 15; z++)
	{
		if (z > 9)
		{
			_putchar((z / 10) + '0');
		}
		_putchar((z % 10) + '0');
	}
	_putchar('\n');
}
}
