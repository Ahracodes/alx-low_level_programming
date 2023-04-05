#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - functions deleting node at given index
 * @head: x2 pointer
 * @index: node index
 *
 * Return: 1 in case of success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv = NULL, *tmp = *head;
	unsigned int x;
	if (!head || !*head) /** head and *head not NULL*/
		return (-1);

	if (index == 0) 
	{
		listint_t *next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	for (x = 0; tmp && x < index; x++)
	{
		prv = tmp;
		tmp = tmp->next;
	}

	if (!tmp)
		return (-1);

	prv->next = tmp->next;
	free(tmp);
	return (1);
}
