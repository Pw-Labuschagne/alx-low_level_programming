#include <stdio.h>
#include "main.h"
/**
 * int _isalpha.c - is it alpha
 * @c: parameter
 * Return 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c >='A') && (c <= 'z' && c <= 'A'))
{
return (1);
}
else
{
return (0);
}
}

