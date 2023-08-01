#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: The pointer to the first node in the list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *trav;
	int tof;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		tof = *h - (*h)->next;
		if (tof > 0)
		{
			trav = (*h)->next;
			free(*h);
			*h = trav;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}




