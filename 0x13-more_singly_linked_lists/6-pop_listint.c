#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of list
 * @head: double pointer to head of list
 *
 * Return: value of deleted node or 0 if NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *dlt_node;
	int dlt_value;

	if (head == NULL || *head == NULL)
		return (0);

	dlt_node = *head;
	*head = dlt_node->next;
	dlt_value = dlt_node->n;
	free(dlt_node);
	return (dlt_value);
}
