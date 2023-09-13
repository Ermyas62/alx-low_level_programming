#include <stdio.h>

/**
 * main - program to find the first 50 fibbonaci
 * Return: 0
 */

int main(void)

{
	uns igned long int term1 = 1;
	uns igned long int term2 = 2;
	uns igned long int next;
	int i;

	printf("%lu, ", term1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
	}
	printf('\n');
	return (0);
}
