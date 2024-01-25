#include "lists.h"

/**
 * print_dlistint - prints the item in the ll
 * and returns their count
 * @h: Linked List head
 *
 * Return:  number of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
