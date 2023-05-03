#include "lists.h"

/**
 * add_nodeint - This adds a new node at the starting of a listint_t list
 * @head: This pointes to a pointer to the head of the list
 * @n: The value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
