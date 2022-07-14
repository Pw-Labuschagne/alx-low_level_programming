#include <stdio.h>
/**
 * startup - executes and prints string before main is executed.
 * Return: nothing
 */
void startup (void) __attribute__ ((constructor));

void startup (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
