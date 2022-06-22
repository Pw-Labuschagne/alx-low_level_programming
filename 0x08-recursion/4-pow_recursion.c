#include "main.h"
/**
 * _pow_recursion - Raise x to the power of y
 * @x: number to be raised
 * @y: Number by which it should be raised
 * Return: raised number
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x , y - 1));
}
