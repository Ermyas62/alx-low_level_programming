#include "main.h"


/**
 * binary_to_uint - function converts a binary to unsigned int
 * @b: pointer to a string
 *
 * Return: unsigned int with decimal value, 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num, mult;

	num = 0;
	mult = 1;
	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
		a++;
	for (a -= 1; a >= 0; a--)
	{
		if (b[a] != '\0' && b[a] != '1')
			return (0);
		num += (b[a] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
