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
int sum = atoi(argv[1]);
if (argc < 1)
{
printf("Error\n");
}
else 
{
sum = sum * atoi(argv[2]);
printf("%d\n", sum);
}
return (0);
}
