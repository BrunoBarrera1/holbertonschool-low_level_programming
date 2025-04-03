#include "lists.h"

/**
 * list_len - calculates the num of elements in a linked list
 * @h: pointer to head of the list
 * Return: the num of total elements linked
 */
size_t list_len(const list_t *h)
{

	size_t contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		contador++;
		h = h->next;
	}


	return (contador);
}
