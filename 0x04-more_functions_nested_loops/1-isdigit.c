#include "main.h"

/**
 * _isdigit - check the number is between 0 and 9
 * @c: char to be checked
 * Return: 0 and 1
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
