#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: alwayas 0
 */

int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
