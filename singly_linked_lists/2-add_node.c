#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the start of the list
 * @head: double pointer to start of the list
 * @str: string to duplicate
 * Return: address to new node or null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_str = strdup(str);
	if (new_str == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
