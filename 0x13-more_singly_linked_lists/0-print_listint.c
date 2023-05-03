#include "lists.h"

/**
 * print_list int - This prints the elements of a listint_t list
 * @h: pointes to the head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}

	return (count);
}
