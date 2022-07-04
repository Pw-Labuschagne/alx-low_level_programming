#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns name of file it was compiled from
 * @argv: 0 is the executable file name
 * @argc: not being used
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
