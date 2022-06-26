#include <stdio.h>
/**
 * main - Returns all arguments received
 * @argc: number of arguments
 * @argv: the array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
if (argc > 1)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
