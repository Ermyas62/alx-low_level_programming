#include "main.h"

/**
 * print_sign - the sign of the number
 * @n : the integer to be checked 
 * Return: 1 if +ve, -1 if -ve and 0 if zero
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
