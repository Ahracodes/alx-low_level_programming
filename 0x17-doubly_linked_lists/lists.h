#ifndef LISTS_H
#define LISTS_H

/* LIBRARIES */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/* STRUCTURES */

/**
 * struct dlinstint_s - doubly linked list
 *
 * @node: value in node
 *
 * @prev: pointer to prev node
 *
 * @next: pointer to next node
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

/* PROTOTYPES */

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif
