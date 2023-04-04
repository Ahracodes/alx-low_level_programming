#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 *
 * @head: pointer to head node
 * @index: index of the node
 *
 * Return: pointer of Index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nb;

	if (head == NULL)
		return (NULL);
	for (nb = 0; nb < index; nb++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
