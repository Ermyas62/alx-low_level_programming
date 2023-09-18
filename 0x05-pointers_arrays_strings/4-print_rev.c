#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @r: the string to print
 * Return: void
 */

void print_rev(char *r)

{
	int c = 0;

	while (r[c] != 0)
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
	_putchar(r[c]);
	}
	_putchar('\n');
}
