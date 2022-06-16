#include "main.h"
/**
 * reverse_array - Reverses contents of array of integers
 * @a: the array
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
int i, len, start, temp;
start = 0;
temp = 0;
for (i = 0; a[i] != '\0'; i++)
{
}
len = i;
for (i = 0; i < n; i++)
{
temp = a[start];
a[start] = a[len];
a[len] = temp;
start++;
len--;
}
return ();
}
