#include <stdio.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: 1 on success 
 *      -1 else
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
