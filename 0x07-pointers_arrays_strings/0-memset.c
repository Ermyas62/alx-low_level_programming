#include "main.h"
/**
 * _memset - fill a memory with a constant value
 * @s: adress of memory to be filled
 * @b: the desired value
 * @n: number pf bytes to be changed
 * Return: changed array with new value of n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

