#include "main.h"

/**
 * _puts - function pritn a string to stdout
 * @str: input
 * _putchar: print a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str);

	_putchar('\n');
}
