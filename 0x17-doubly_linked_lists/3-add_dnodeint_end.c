#include "lists.h"

/**
 * add_dnodeint_end - adds node at end
 *
 * @head: dbl pointer to head
 *
 * @n: value of node to add
 *
 * Return: pointer of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	/* allocate memory for new node */
	if (new_node == NULL) /* memory alloc fail */
		return (NULL);
	if (head == NULL) /* NULL head error */
		return (NULL);

	new_node->n = n; /* set value of new node*/
	new_node->next = NULL; /*newt pointer = NULL*/

	if (*head == NULL)
	{
		new_node->prev = NULL; /* set prev to NULL */
		*head = new_node; /* head becomes new node */
	}
	else
	{
		h = *head;
		while (h->next != NULL) /* iterate through list until head */
			h = h->next;
		h->next = new_node; /*put new node in the end */
		new_node->prev = h; /* prev becomes new_node */
	}
	return (new_node);
}
