#include <stdio.h>

/**
 * swap_int  - swaps the value of two integers
 * @a: the first intger to swaped
 * @b: the second integer to be swaped
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
