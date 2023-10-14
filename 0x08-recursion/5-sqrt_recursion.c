#include "main.h"

/**
 * _sqrt_recursion - return the natural sruare root of a number
 * @n: number to calculate
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n));
}

/**
 * actual_sqrt_recursion - recurses to find the actual the natural
 *     square root of a number
 * @n: number to calculate
 * @i: number to iterate
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
