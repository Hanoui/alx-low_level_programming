#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *current = head;
	const listint_t *temp;

	while (current != NULL)
	{
		num_nodes++;
		putchar('[');
		printf("%p", (void *)current);
		putchar(']');
		printf(" %d\n", current->n);
		current = current->next;
		temp = head;
		while (num_nodes > 0)
		{
			if (temp == current)
			{
				putchar('-');
				putchar('>');
				putchar(' ');
				putchar('[');
				printf("%p", (void *)current);
				putchar(']');
				printf(" %d\n", current->n);
				return (num_nodes);
			}
			num_nodes--;
			temp = temp->next;
		}
	}

	return (num_nodes);
}

