#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: pointer to the pointer of the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		/*store the next node*/
		next = (*head)->next;
		/*change the direction of the current node*/
		(*head)->next = prev;

		/**Move the 'prev' pointer one step*/
		prev = *head;
		/*move the 'head' pointer one step*/
		*head = next;
	}

	*head = prev;

	return (*head);
}
