#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a text
 * Return: always 0
 *
 */

int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

if (lastd > 5)
	printf("last digit of %d is %d and is greater than 5", n, lastd);
else if (lastd == 0)
	printf("last digit of %d is %d and is greater than 0", n, lastd);
else if (lastd < 6 && lastd != 0)
	printf("last digit of %d is %d and is less than 6 and not 0", n, lastd);
printf("\n");
return (0);
}

