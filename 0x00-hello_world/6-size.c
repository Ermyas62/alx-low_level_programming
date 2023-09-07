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

	printf("size of a char: %lu byte(s)\n", sizeof(a));
	printf("size of an int: %lu byte(s)\n", sizeof(b));
	printf("size of a long int: %lu byte(s)\n", sizeof(c));
	printf("size of a long long int: %lubyte(s)\n", sizeof(d));
	printf("size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
