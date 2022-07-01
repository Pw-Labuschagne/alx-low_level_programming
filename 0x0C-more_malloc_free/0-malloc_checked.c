#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * mallock_checked - allocates memory using the string
 * @b: size needed
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *s;
s m= malloc(b);
if (s == 0)
{
exit(98);
}
return (s);
}
