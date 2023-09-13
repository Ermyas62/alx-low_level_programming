#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @i: number to be computed
 * Return:absolute value of the number or 0.
 */
int _abs(int i)
{
	if (i < 0)
	{
	int abs_val;

	abs_val = i * -1;
	return (abs_val);
	}
	return (i);
}
