#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: List to be freed
 */
void free_listint(listint_t *head)
{
listint_t *trav;

	while (head)
	{
		trav = head->next;
		free(head);
		head = trav;
	}
}

