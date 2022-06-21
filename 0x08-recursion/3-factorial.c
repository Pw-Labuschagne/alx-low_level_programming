#include "main.h"
/**
 * factorial - Returns factorial of a number
 * @n: Number to factorial
 * Return: Factorial of number n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
if (n != 0)
{
return (n * factorial(n - 1));
}
return (0);
}
