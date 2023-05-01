#include "lists.h"

/**
 * sum_listint - calculate sum fot data
 * @head: start node
 *
 * Return: result for summition
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
