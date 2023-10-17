#include "main.h"

/**
 * _memset - program fills a block of memory
 * @s: starting address of memory to be filled
 * @n: the desired value
 * @b: input
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > a; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
