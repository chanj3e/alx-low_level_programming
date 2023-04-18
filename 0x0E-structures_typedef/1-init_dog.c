#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog
 * @d: pointer
 * @name: first
 * @age: second
 * @owner: third
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dod));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
