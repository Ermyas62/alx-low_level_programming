#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the new dog struct whose variable is to be intialized
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of tthe new dog
 * @owner: the owner of the new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
