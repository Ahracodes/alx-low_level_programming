#include "lists.h"

/**
 * dlistint_len - counts elements in list
 *
 * @h: pointer to head
 *
 * Return: nb of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
