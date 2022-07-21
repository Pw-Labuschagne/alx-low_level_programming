#include "main.h"
/**
 * clear_bit - Sets bit to 0 at given index
 * @n: Integer to change bit
 * @index: Given index to change bit
 * Return: 1 if successful and -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
