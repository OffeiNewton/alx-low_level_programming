#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list.
 * @head: Pointer to a pointer to the first node of the list.
 * @index: Index of the node to be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *current = *head;
	unsigned int k;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (k = 0; k < index; k++)
	{
		if (current == NULL)
			return (-1);

		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
