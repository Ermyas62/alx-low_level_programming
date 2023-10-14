#include "main.h"
#include <stddef.h>

/**
 * _strchr - entry point
 * @S: input
 * @c: input char
 * Return: always succes
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
			return (s);
		return (NULL);
}
