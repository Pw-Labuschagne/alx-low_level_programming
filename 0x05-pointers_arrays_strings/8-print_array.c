#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of and array
 * @a: integer type declared as a pointer
 * @n: integer value to be held
 * Return: 
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
return;
}
