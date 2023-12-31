#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}

	return (num_node);
}
