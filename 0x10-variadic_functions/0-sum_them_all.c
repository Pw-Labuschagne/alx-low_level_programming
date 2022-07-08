#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all paramet
 * @n: Ubsigned int for argument
 * @...: variable arguments
 * @Return: 0 for n == 0 and int as suc
 */
int sum_them_all(const unsigned int n, ...)
{
va_list sum;

unsigned int c;
int all = 0;

if (n == 0)
{
return (0);
}
va_start(sum, n);

for (c = 0; c < n; c++)
{
all += va_arg(sum, int);
}
va_end(sum);

return (all);
}
}
