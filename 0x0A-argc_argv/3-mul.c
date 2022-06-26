#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: number of arguments
 * @argv: the strin arguments, but numbers now
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum;
if(argc > 1)
{
sum = atoi(argv[1]);
sum = sum *atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
