#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numebrs
 * @argc: The amount of numbers
 * @argv: Input string of numebrs
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 0; i < argc; i++)
{
if (*argv[i] >= 12)
{
printf("Error\n");
return (1);
}
else
{
sum = sum + *argv[i];
}
}
printf("%d\n", sum);
return (0);
}
