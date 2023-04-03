#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of a list.
 *
 * @head: head of the singly linked list
 *
 * @n: Int added in the node
 *
 * Return: NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->newt = *head;
	*head = new;

	return (new_node);
}
