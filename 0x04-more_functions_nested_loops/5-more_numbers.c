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
	for (z = 1; z <= 10; z++)
	{
		if (i < 10)
		{
			_putchar(i);
		} else if (i > 10)
		{
			_putchar((i % 10) + '0');
		}
	}
}
_putchar('\n');
}
