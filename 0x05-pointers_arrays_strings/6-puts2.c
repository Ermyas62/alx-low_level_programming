#include "main.h"

/**
 * puts2 - print every other characterstic of a string
 * @str: the string to be treated
 * Return: void
 */

void puts2(char *str)

{
	int j = 0;
	int i;

	while (str[j] != '\n')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
