#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a doubly libked list
 * @head: pointer to the first node of the list
 * @index: index at which the node is to be added
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (i == index ? head : NULL);
}
