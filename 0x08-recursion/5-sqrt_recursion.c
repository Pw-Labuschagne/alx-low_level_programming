#include "main.h"
/**
 * _sqrt_recursion - Returns natural root of number
 * @n: Number to be used for sqrt
 * Return: sqrt of number n
 */
int _sqrt_recursion(int n)
{
float x;
x = n;
if (x * x != n)
{
return (_sqrt_recursion(n - 1));
}
if ((x < 0) || (x == 0))
{
return (-1);
}
else
{
return (x);
}
}
