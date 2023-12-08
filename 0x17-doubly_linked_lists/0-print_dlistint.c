#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *t;

	t = h;
	while (t && t->prev)
		t = t->prev;

	for (count = 0; t; count++, temp = temp->next)
		printf("%d\n", t->n);

	return (count);
}
