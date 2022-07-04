#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints struct dog
 * @d: address stored thats required
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d->name = NULL)
{
printf("Name: (nill)\n");
}
	else
{
	printf("Name: %s\n", d->name);
}
if (d->age = NULL)
{
printf("Age: (nill)\n");
}
	else
{
	printf("Age: %.1f\n", d->age);
}
if (d->owner = NULL)
{
printf("Owner: (nill)\n");
}
	else
{
	printf("Owner: %s\n", d->owner);
}
}

