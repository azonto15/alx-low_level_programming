#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop -  a function that finds the loop in a linked list.
 * @head: Lnked list
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *wol = head;
	listint_t *mbr = head;

	if (!head)
		return (NULL);

	while (wol && mbr && mbr->next)
	{
		mbr = mbr->next->next;
		wol = wol->next;
		if (mbr == wol)
		{
			wol = head;
			while (wol != mbr)
			{
				wol = wol->next;
				mbr = mbr->next;
			}
			return (mbr);
		}
	}

	return (NULL);
}


