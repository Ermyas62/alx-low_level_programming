#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: alwayas 0
 */

int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
