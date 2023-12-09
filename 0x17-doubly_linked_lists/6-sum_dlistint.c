#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data
 * @head: the first node of the list
 * Return: sum of the data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
