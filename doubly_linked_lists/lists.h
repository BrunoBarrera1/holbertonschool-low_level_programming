#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stddef.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s dlistint_t;

struct dlistint_s
{
	int n;
	dlistint_t *prev;
	dlistint_t *next;
};

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
