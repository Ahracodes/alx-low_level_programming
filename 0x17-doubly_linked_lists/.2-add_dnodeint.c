#include "lists.h"

dlistint_t *add_dnoteint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node-> = *head;
	*head = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
