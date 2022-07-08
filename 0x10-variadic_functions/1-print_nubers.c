#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/** print_numbers - prints numbers
 * @seperator: pounter for string to print?
 * @n: integers passed to function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list
		unsigned int a;
	if (n == 1)
	{
		printf("%i\n", va_arg(list, int));
	}
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (a = 0; a < n - 1; a++)
	{
		if (seperator == NULL)
		{
			printf("%i", va_arg(list, int));
		}
		else
		{
			printf("%i%s", va_arg(list, int), seperator);
		}
		if (i == n - 1)
		{
			printf("%i\n", va_arg(list, int));
		}
		va_end(list);
	}
}
