#include "lists.h"

/**
 * pop_listint - delete the head node of a linked lisit
 * @head: pointer to the first element
 *
 * Return: the data inside the element that was deleted
 *        0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
