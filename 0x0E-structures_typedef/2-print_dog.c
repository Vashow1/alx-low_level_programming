#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the variable values
 * @d: the struct dog being parsed.
 */

void print_dog(struct dog *d)
{
	(d->name == NULL) ? ("(nil)") : (d->name);
	printf("Name: %s\n", d->name);
	if (d->age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %i\n", d->age);
	}
	(d->owner == NULL) ? ("(nil)") : (d->owner);
	printf("Owner: %s\n", d->owner);
}
