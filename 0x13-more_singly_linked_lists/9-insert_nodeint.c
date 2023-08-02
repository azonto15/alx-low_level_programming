#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *neda;
	listint_t *trav = *head;

	neda = malloc(sizeof(listint_t));
	if (!neda || !head)
		return (NULL);

	neda->n = n;
	neda->next = NULL;

	if (idx == 0)
	{
		neda->next = *head;
		*head = neda;
		return (neda);
	}

	for (k = 0; trav && k < idx; k++)
	{
		if (k == idx - 1)
		{
			neda->next = trav->next;
			trav->next = neda;
			return (neda);
		}
		else
			trav = trav->next;
	}

	return (NULL);
}



