#include "lists.h"
#include <stdlib.h>

/* Rest of the code remains the same */

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	free_listint(*head);
	*head = NULL;
}

