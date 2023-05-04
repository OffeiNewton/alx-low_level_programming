#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp;

	if (!head)
		exit(98);

	temp = head;

	while (temp)
	{
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp->next >= temp)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}

		temp = temp->next;
	}

	return (count);
}
