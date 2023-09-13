#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet in order
 * followed by new line
 */


void print_alphabet_x10(void)

{
	int i;
	char j;

	i = 1;

	while (i <= 10)
	{
	j = 'a';
	while (j <= 'z')
		{
		_putchar(j);
		j++;
		}
		_putchar('\n');
		i++;
	}
}
