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
if (argc < 1)
{
printf("0\n");
}
else
{
for (i = 0; i < argc; i++)
{
if ((*argv[i] < 0) || (*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >= 'A' &&*argv[i] <= 'Z'))
{
printf("Error\n");
return (1);
}
else
{
sum = sum + (atoi(argv[i]));
}
}
}
printf("%d\n", sum);
return (0);
}
