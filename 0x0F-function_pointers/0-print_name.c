#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name
 * @f: pointer assocciated with it
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
