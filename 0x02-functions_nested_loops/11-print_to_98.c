#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - all natural nums
 * @n: our counter
 * Return: 1
 */
void print_to_98(int n)
{
int z, x;
if (n <= 98)
{
for (z = n; z <= 98; z++)
{
if (z != 98)
{
printf("%d, ", z);
}
else if (z == 98)
{
printf("%d\n", z);
}
}
}
else if (n >= 98)
{
for (x = n; x >= 98; x--)
{
if (x != 98)
{
printf("%d, ", x);
}
else if (x == 98)
{
printf("%d\n", x);
}
}
}
}
