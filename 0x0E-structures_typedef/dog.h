#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct_dog - a dog's basic info
 * @name: name to intialize
 * @age: age to intialize
 * @owner: owner to intialize
 * description: first struct
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
