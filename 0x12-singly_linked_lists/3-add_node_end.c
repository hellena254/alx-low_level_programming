#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: A pointer to a pointer to the first node of the list
 * @str: The string yo be added to the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list *new_node;
	list *current;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
