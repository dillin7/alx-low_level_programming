#include "lists.h"

/**
 * listint_len - Provides the count of elements in a linked list
 * @h: Traverses a linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
