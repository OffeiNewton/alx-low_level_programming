#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the start of a list_t list
 * @head: double pointer to the start of the list
 * @str: string to be added to the list
 *
 * Return: The address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
