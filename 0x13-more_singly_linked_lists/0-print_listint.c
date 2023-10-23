#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}

	return (count_node);
}
