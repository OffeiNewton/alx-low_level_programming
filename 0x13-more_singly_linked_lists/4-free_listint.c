#include "lists.h"

/**
 * free_listint - This funtion frees a linked list
 * @head: The head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}
}
