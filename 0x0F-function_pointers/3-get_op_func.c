#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * @get_op_func: returns the function needed
 * @s: points to function needed
 * Return: the calc of function
 */
op_t ops[] = 
{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int (*get_op_func(char *s))(int,int)
{
int i = 0;
while (i < 6)
{
	if (ops[i].op[0] == s[0])
	{
		return (ops[i].f);
	}
	i++;
}
printf("Error\n");
exit(99);
}
