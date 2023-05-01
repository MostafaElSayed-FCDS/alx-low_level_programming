#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
