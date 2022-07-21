#include "main.h"
/**
 * set_bit - Sets value of bit to 1 at certain index
 * @n: Input integer to change the bit of
 * @index: Given place to change bit
 * Return: 1 if worked & -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= 1 << index;

	return (1);

}
