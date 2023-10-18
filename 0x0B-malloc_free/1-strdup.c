#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer
 * @str: the string to be copied
 * Return: pointer to array NULL if fail
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[len] = '\0';

	return (duplicate);
}
