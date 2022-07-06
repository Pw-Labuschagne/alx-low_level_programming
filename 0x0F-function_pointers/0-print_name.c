#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @f: pointer assocciated with it
 * @name: name to be fed
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
