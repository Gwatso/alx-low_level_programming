#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 *
 * name: Name of the dog
 *
 * age: Age of the dog
 *
 * owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void in_dog_class(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog any_dog;

any_dog *new_dog(char *name, float age, char *owner);

void free_dog(any_dog *d);

#endif
