#include <stdio.h>
#include "main.h"

/**
 * main - print the number of argument
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: alwayas 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
