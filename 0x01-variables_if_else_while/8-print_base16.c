#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int d;
	char i;

	for (d = '0'; i <= '9'; i++)
	putchar(d);

	for (d = 'a'; i <= 'f'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
