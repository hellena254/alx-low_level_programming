#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: The number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
