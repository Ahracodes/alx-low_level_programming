#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at specific id
 *
 * @head: head of list
 *
 * @index: required index
 *
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL) /* empty list */
		return (NULL);
	if (index == 0) /* head is id = 0 */
		return (head);

	for (x = 0, x < index, x++) /* as long as x lower than id */
	{
		if (head->next == NULL) /* list shorter than id */
			return (NULL);
		head = head->next;
	}
	return (head);
}
