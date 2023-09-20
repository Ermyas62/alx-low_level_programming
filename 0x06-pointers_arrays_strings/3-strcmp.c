#include "main.h"

/**
 * _strcmp - compare string values
 * @a: input value
 * @b: input value
 * Return: a[i] - b[i]
 */

int _strcmp(char *a, char *b)
{
	int i = 0;

	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}

