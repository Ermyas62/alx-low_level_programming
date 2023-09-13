#include "main.h"

/**
 * _islower - check that the char is lower case
 * @c: char to be checked
 * Return: 1 if char is upper and 0 if lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
