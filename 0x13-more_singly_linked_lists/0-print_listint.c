#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list  - a function that prints all the elements of a list
* @h: Linked list
* Return: number of nodes of nodes in the List
**/
size_t print_listint(const listint_t *h)
{
size_t trav = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		trav++;
		h = h->next;
	}

	return (trav);
}

