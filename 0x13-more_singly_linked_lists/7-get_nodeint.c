#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @head: The first node in the linked list
 * @index: index of the node to be printed
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *trav = head;

	while (trav && j < index)
	{
	trav = trav->next;
		j++;
	}
	return (trav ? trav : NULL);
}


