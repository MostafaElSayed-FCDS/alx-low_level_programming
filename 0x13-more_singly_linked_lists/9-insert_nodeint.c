#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: first node
 * @idx: index where the new node is added
 * @n: value to new node
 *
 * Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; node && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		else
			node = node->next;
	}

	return (NULL);
}
