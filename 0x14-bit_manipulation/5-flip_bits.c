#include "main.h"
/**
 * flip_bits - Determines the ammount of bits to flip to swap numbers
 * @n: Integer 1 to compare
 * @m: Integer 2 to compare
 * Return: Number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		counter++;
		x &= (x - 1);
	}
	return (counter);
}
