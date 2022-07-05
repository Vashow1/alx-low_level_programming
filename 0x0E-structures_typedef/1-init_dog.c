#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable that is the struct itself
 * @name: name of the struct variable 'dog'
 * @age: age of the struct variable 'dog'
 * @owner: string of the owner of the struct variable 'dog'
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
