#include "lists.h"

/**
 * sum_listint - This function returns the total of all the data (n) 
 * @head:This pointes to head of list
 *
 * Return: The total of all data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
}
