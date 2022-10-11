#ifndef DOG
#define DOG


/**
 * struct dog - a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG */
