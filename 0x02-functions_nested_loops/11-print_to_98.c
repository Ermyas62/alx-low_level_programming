#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers to 98
 * @n: print from this
 */
void print_to_98(int n)

{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d", i);
		}
	}
	else if (n >= 98)
	{
		for (j = n; i >= 98; i--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d", j);
		}

	}
}
