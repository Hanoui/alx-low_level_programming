#include <stdlib.h>
#include <stdio.h> /* Added the necessary include */
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head = NULL;
    list_t *new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error: Memory allocation failed\n");
        return (EXIT_FAILURE);
    }

    new->str = "World";
    new->len = 5;
    new->next = head;
    head = new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error: Memory allocation failed\n");
        return (EXIT_FAILURE);
    }

    new->str = "Hello";
    new->len = 5;
    new->next = head;
    head = new;

    print_list(head);

    free(new); /* Only need to free the last allocated node as we are freeing the list at the end */
    return (EXIT_SUCCESS);
}

