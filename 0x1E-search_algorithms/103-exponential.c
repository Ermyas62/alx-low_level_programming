#include "search_algos.h"

/**
 * _binary_search - Searche for the value in the sorted array
 *                  of integer using the binary search algorithm
 * @array: the pointer to the first element of an array to search
 * @left: the starting index of the [sub]array to search
 * @right: the ending index of the [sub]array to search
 * @value: the value to be searched
 *
 * Return: -1 if the value is not present or the array is NULL
 *         else, the index where the value is located
 *
 * Description: Prints the [sub]array to be searched after each change
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for the value in a sorted array
 *                      of integer using the exponential search
 * @array: the pointer to the first element of an array to search
 * @size: the number of element(s) in an array
 * @value: a value to be searched
 *
 * Return: -1, If the value is not present or the array is NULL,
 *         else, the index where the value is located.
 *
 * Description: Prints the value every time it is compared in an array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
