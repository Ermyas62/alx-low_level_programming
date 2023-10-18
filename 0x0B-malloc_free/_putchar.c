#include "mian.h"
#include <unistd.h>

/**
 * _putchar - write the char c to std
 * @c: the char to print
 *
 * Return: 0 on success
 *         -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
