#include <stdio.h>
/**
 * main - print the size
 * Return: always return 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu 1 byte\n", sizeof(a));
	printf("size of an int: %lu 4  bytes\n", sizeof(b));
	printf("size of a long int: %lu 8 bytes\n", sizeof(c));
	printf("size of a long long int: %lu 8 bytes\n", sizeof(d));
	printf("size of a float: %lu 4 bytes\n", sizeof(e));
	return (0);
}
