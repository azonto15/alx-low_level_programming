#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: Is the pointer to the initial  member in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *trav;
	int mamba;

	if (!head || !*head)
		return (0);

	mamba = (*head)->n;
	trav = (*head)->next;
	free(*head);
	*head = trav;

	return (mamba);
}

