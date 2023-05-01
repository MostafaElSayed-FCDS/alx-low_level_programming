i#include "lists.h"

/**
 * add_nodeint - adds a new node to the top of linked list
 * @head: pointer to the first node
 * @n: new value
 *
 * Return: pointer to the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));;

	if (!new)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
