#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New data type
 * @name: Name
 * @age: age
 * @owner: the owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

void the_dog(struct dog *p, char *name, float *age, char *owner);
void print(struct dog *p);

typedef struct dog dog_t;

#endif
