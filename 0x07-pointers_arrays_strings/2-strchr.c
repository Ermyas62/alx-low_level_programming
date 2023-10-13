#include "main.h"

/**
 * _strchr - entry point
 * @S: input character pointer
 * @c: input char
 * Return: always succes
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}

