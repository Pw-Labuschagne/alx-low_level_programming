#include "main.h"
#include <stdio.h>
/**
 * main - used to display argv name
 * @argc: unused
 * @argv: name of command
 * Return: 0;
 */
int names(__attribute__((unused)) int argc, char **argv)
{
printf("%s\n", *argv);
return (0);
}
