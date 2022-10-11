#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a do
 * @d: struct
 *
 */

void print_dog(struct dog *d)
{
if (d || d->owner == NULL)
{
printf("(nil)");
}
else if (d->name == NULL)
{
printf("name:(nil)");
}
else if (d == NULL)
{

}
else
{
printf("Name: %s\nAge: %.6f\nOwner: %s", d->name, d->age, d->owner);
}
}
