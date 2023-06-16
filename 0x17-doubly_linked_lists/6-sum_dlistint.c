#include "lists.h"

/**
 * sum_dlistint - sums values
 *
 * @head: pointer to head
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
