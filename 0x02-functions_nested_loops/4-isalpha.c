#include "main.h"

/**
 * main - check the alphabet letter
 * @c: char to be checked
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'Z'))
		return (1);
	else
		return (0);
}