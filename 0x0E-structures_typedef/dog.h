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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

typedef struct dog_t *new_dog(char *name, float age, char *owner);

#endif
