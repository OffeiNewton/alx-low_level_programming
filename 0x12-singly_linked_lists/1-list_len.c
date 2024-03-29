#include "lists.h"

/**
 * list_len - Thin returns the number of elements in a linked list_t list
 * @h: pointer to the start of the list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
