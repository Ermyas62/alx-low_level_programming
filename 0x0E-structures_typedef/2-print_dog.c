#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the struct declared for dog d
 * @d: the new dog d
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name : % s\nAge : % f\nOwner : % S\n", d->name, d->age, d->owner);
}

