#include "lists.h"

/**
 * find_listint_loop- find the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the loop start or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = fast = head;
	do {
		if (slow->next)
			slow = slow->next;
		else
			return (NULL);

		if (fast->next->next)
			fast = fast->next->next;
		else
			return (NULL);
	} while (fast != slow);

	slow = head;
	while (fast != slow)
	{
		fast = fast->next;
		slow = slow->next;
	}

	return (slow);
}
