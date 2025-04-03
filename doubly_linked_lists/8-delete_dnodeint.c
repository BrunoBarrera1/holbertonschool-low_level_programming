#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
