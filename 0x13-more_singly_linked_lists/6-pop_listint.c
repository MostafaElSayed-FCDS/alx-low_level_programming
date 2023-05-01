#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to first element
 *
 * Return: value that was deleted or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int j;

	if (!head || !*head)
		return (0);

	j = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (j);
}
