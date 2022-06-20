#include "main.h"
/**
 * print_diagsums - Prints sums of diagonal matrix of array
 * @a: array thats added
 * @size : size of the array
 * Return: 1
 */
void print_diagsums(int *a, int size)
{
int i, sum;
sum = 0;
for (i = 0; i < size; i++)
{
sum += a[i][i];
}
_putchar('%d, ', sum)
}
