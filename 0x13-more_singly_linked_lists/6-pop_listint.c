#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: a pointer to a pointer to the head of the list
 * Return: the head of the node's data
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
