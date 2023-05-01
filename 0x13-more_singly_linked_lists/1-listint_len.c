#include "lists.h"

/**
 *listint_len - prints num of element in linked lists
 *@h: pointer to first node
 *
 * Return: number of nodes in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

        while (h)
	{
		h = h->next;
                j++;
	}
        return (j);
}
