#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the node of a listint_t linked list
 * @head: This points to head of list
 * @index: index of node to return
 *
 * Return: The pointer to nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
	current = current->next;
	count++;
	}

	if (count == index && current != NULL)
	return (current);
	else
		return (NULL);
}
