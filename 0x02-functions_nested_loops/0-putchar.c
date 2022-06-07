#include <stdio.h>
#include "main.h"
/**
 * main - printing _putchar
 * Return: 0;
 */
int main(void)
{
char ch[] = "_putchar";
int i = 0;
for ( i = 0; i != 7; i++)
{
_putchar(ch[i]);
}
_putchar('\n');
return (0);
}
