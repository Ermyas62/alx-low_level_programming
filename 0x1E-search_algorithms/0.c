#include "search_algos.h"

/**
 * linear_search - searche for the value in the array of
 * integer using linear search algorithms
 *
 * @array: an input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			return ((int)i);
		}
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
	}
	return (-1);
}
