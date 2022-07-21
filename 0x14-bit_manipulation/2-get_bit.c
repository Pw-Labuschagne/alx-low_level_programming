#include "main.h"
/**
 * get_bit - Returns value of bit at given index
 * @n: Integer to determine bit
 * @index: The given point where bit should return
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	num = (n >> index) & 1;
	return (num);

}
