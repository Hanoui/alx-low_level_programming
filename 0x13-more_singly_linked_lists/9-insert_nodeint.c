#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int count = 0;

    if (!head)
        return (NULL);

    if (idx == 0)
        return (add_nodeint_end(head, n));

    current = *head;
    while (current)
    {
        if (count == idx - 1)
        {
            new_node = malloc(sizeof(listint_t));
            if (!new_node)
                return (NULL);
            new_node->n = n;
            new_node->next = current->next;
            current->next = new_node;
            return (new_node);
        }
        current = current->next;
        count++;
    }

    return (NULL);
}

