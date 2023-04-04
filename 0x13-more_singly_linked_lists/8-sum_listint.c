#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list.
 *
 * @head: pointer to head node
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
