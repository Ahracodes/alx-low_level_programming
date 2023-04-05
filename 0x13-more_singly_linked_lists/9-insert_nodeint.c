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
	listint_t *jd, *tmpcopy;   /**declaration of variables*/
	unsigned int x;

	if (head == NULL)  /**first failure: head node is empty*/
		return (NULL);

	if (idx) /*condition: idx isn't refering to first*/
	{
		tmpcopy = *head;
		for (x = 0; x < idx - 1 && tmpcopy != NULL; x++) /**navigate trg indexes*/
		{
			tmpcopy = tmpcopy->next;
		}
		if (tmpcopy == NULL)
			return (NULL);
	}

	jd = malloc(sizeof(listint_t));

	if (jd == NULL) /** failure in case the new space is null */
		return (NULL);
	jd->n = n;

	if (idx == 0)
	{
		jd->next = *head;
		*head = jd;
		return (jd);
	}
	jd->next = tmpcopy->next;
	tmpcopy->next = jd;
	return (jd);
 /*condition: idx isn't refering to first*/
}
