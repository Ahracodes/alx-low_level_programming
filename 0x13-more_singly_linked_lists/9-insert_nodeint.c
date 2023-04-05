#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - fuction to insert node at indicated index
 *
 * @head: pointer
 *
 * @idx: index
 *
 * @n: value to insert
 *
 * Return: adress of the node or NULL in case of failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmpcopy;   /**declaration of variables*/
	unsigned int x;

	if (head == NULL)  /**first failure: head node is empty*/
		return (NULL);

	if (idx) /*condition: idx isn't refering to first*/
	{
		tmpcopy = *head;
		for (x = 0; x < idx - 1 && tmpcopy != NULL; x++)
		{
			tmpcopy = tmpcopy->next;
		}
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmpcopy->next;
	tmpcopy->next = new;
	return (new);
 /*condition: idx isn't refering to first*/
}
