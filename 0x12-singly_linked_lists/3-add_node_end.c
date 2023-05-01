#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * @head: A pointer to a pointer to the first node of the list.
 * @str: Stores the string in the new node.
 *
 * Return: If memory allocation fails or head is NULL, NULL.
 *         else, a pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last_node;

    if (head == NULL)
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
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    last_node->next = new_node;

    return (new_node);
}
