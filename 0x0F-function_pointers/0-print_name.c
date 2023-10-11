#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print the name using pointer to a function
 * @name: name to add
 * @f: pointer to a function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
