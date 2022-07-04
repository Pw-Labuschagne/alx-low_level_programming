#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize new variable struct dog
 * @d: placeholder for address
 * @name: name
 * @age: age
 * @owner: owner of dog
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
