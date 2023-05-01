#include "lists.h"

/**
 *print_listint - print elements of linked lists
 *@h: pointer to first node
 *
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h){
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
