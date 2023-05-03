#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list and sets head to NULL
 * @head: This pointes to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
	return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
