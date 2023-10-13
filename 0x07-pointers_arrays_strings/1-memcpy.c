#include "main.h"
/**
 * _memcpy - a function that copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bitys
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; i++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}