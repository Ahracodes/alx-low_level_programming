#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: pointer to head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL) /*Repeat until all nodes deleted */
	{
		next_node = head->next; /*save ref to next node */
		free(head); /* free current head */
		head = next_node; /* make head the next_node */
	}
}
