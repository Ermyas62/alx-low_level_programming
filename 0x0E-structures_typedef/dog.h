#ifndef DOG_H_
#define DOG_H_
#include <stdlib.h>
#include <stdio.h>

/**
 * struct_dog - a dog's basic info
 * @name: name to intialize
 * @age: age to intialize
 * @owner: owner to intialize
 *
 * Description: first struct
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
