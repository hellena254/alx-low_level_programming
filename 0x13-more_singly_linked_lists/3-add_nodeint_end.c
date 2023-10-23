#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: a pointer to a pointer to the head of the list
 * @n: value to be stored at the node
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node;
	listint_t *current_end_node;

	if (head == NULL)
		return (NULL);

	new_end_node = malloc(sizeof(listint_t));
	if (new_end_node == NULL)
		return (NULL);

	new_end_node->n = n;
	new_end_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_end_node;
		return (new_end_node);
	}

	current_end_node = *head;
	while (current_end_node->next != NULL)
		current_end_node = current_end_node->next;

	current_end_node->next = new_end_node;

	return (new_end_node);
}
