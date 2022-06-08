#include <stdio.h>
/**
 * main - its something
 * Return: 0
 */
int main(void)
{
int i, a, b, sum;
a = 1;
b = 2;
sum = a + b;
printf("1, 2, \n");
for (i = 4; i < 50; i++)
{
a = b;
b = sum;
sum = a + b;
printf("%d, ", sum);
}
return;
}
