#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - its time
 * Return: 1
 */
void jack_bauer(void)
{
int h = 0;
int m = 0;
while (h <= 23)
{
while (m <= 59)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
m++;
}
h++;
m = 0;
}
}
