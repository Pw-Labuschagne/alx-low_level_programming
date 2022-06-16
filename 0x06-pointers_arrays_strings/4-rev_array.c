#include "main.h"
/**
 * reverse_array - Reverses contents of array of integers
 * @a: the array
 * @n: number of elements to swap
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int i, temp;
i = 0;
n--;
while (i <= n)
{
temp = a[i];
a[i++] = a[n];
a[n--] = temp;
}
return;
}
