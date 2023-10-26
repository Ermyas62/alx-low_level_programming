#include "main.h"


/**
 * binary_to_uint - function converts a binary to unsigned int
 * @b: pointer to a string
 *
 * Return: unsigned int with decimal value, 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int len, base_two;
	unsigned int ui;

	if (!b)
		return (0);
	ui = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '\0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			ui += base_two;
		}
	}
	return (ui);
}
