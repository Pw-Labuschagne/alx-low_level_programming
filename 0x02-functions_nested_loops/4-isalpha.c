#include <stdio.h>
#include "main.h"
/**
 * int _isalpha.c - is it alpha
 * @c: parameter
 * Return 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c >=122) || (c <= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

