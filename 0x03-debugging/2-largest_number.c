#include "main.h"

/**
 * latgest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */

int larger_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
if (b > a && b > c)
{
largest = b;
}
else if (c > a && c > b)
{
largest = c;
}
printf("%d", largest);
return (0);
}
