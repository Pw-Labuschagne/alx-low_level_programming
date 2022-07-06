#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int main(int argc, char *argv[])
{

int (*calc)(int,int);

int a, b, operator;
a = (atoi(argv[1]));
b = (atoi(argv[3]));
operator = argv[2][0];


if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
switch(operator)
{
	case '+' : 
		break;
	case '-' :
		break;
	case '*' :
		break;
	case '/' :
		break;
	case '%' :
		break;
	default :
		printf("Error\n");
		exit(99);
}
calc = get_op_func(argv[2]);
printf("%d\n", calc(a, b));
return(0);
}
