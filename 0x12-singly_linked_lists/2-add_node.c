#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node to the beggining of
 *            the list
 * @head: a pointer to the list
 * @str: the string to be added
 * @Return: NULL - if the function fails
 *          the address of the new element - else
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	new-> = dup;
	new-> = len;
	new-> = *head;

	*head = new;

	return (new);
}
