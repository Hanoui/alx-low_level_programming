#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;
    const listint_t *loop_node = NULL;

    while (current)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        if (current == loop_node)
        {
            printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
            break;
        }

        current = current->next;
        if (count % 2 == 0 && count != 0)
            loop_node = loop_node ? loop_node->next : head;
    }

    return (count);
}

