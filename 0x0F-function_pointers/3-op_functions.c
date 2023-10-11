#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: the sum of two numers
 */


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: the difference of two numers
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: the product of two numers
 */

int op_mul(int a, int b)
{
        return (a - b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: the quocient of two divisible numbers
 */

int op_div(int a, int b)
{
        return (a / b);
}

/*
 * op_mod - return the reminder of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of division of a by b
 */

int op_mod(int a, int b)
{       
        return (a % b);
}


