#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: a struct
 * @name: a name of dog
 * @age: the age of the dog
 * @owner: the dog's owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{d->name = name;
d->age = age;
d->owner = owner;
}
}
}
