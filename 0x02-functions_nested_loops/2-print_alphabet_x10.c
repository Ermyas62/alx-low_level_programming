#include "main.h"

/**
 * main - print alphabet in order
 * Return: void
 */


void print_alphabet_x10(void)

{
	int i = 1;
	char j;

	while (i <= 10)
	{
	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	}
	_putchar('\n');
	i++;
}
