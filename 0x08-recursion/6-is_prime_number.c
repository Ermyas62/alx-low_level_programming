#include "main.h"

/**
 * actual_prime - calculate if a number is prime
 * @n: number to evaluate
 * @i: iterate
 * Return: 1 if number is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - say if a number is prime or not
 * @n: number to evaluate
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
