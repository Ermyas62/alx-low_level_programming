#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to c
 * @c: the character to pritn
 *
 * Return: 0 on success
 *         -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
