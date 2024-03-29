#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints attribute inside struct
 * @d: pointer to a struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
