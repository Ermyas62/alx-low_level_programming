#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - the singly linked list
 *
 * @n: an integer
 * @index: an index of the node in the list
 * @next: a Pointer to the next node
 *
 * Description: singly linked list node structure
 * for the Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - the Singly linked list with an express lane
 *
 * @n:an integer
 * @index: an index of the node in the list
 * @next: a Pointer to the next node
 * @express: a Pointer to the next node in the express lane
 *
 * Description: the singly linked list node structure with an express lane
 * for the Holberton project
 */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);


#endif
