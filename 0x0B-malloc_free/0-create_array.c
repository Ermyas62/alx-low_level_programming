#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: specfic char to intialize
 * Return: if size == 0 or the function fali - null,
 * otherwise - a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		str[index] = c;

	return (str);
}
