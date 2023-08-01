#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to the first element
 * @index: index of the node to delete
 * Return: 1 on (Success), and  -1 if it Fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav = *head;
	listint_t *add = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(trav);
		return (1);
	}

	while (j < index - 1)
	{
		if (!trav || !(trav->next))
			return (-1);
		trav = trav->next;
		j++;
	}

	add = trav->next;
	trav->next = add->next;
	free(add);

	return (1);
}


