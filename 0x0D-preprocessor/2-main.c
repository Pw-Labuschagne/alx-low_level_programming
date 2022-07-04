#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns name of file it was compiled from
 * @argv: 0 is the executable file name
 * @argc: not being used
 * Return: 0
 */
int main((__attribute__((unused)) char argc), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
