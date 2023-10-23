#include "lists.h"

/**
 * add_nodeint_end - add a new at the end
 * @head: a pointer to the address of the head
 * @n: the integer to the new node
 *
 * Return: if the function fail - NULL
 *         otherwise - the address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
