#include "lists.h"
#include <stdio.h>


/**
 * looped_listint_len -  a function that prints a listint_t linked list.
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: Lopped list If true otherwisethe list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *trav, *veran;
	size_t temp = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	trav = head->next;
	veran = (head->next)->next;

	while (veran != NULL)
	{
		if (trav == veran)
		{
			trav = head;
			while (trav != veran)
			{
				temp++;
				trav = trav->next;
				veran = veran->next;
			}

			trav = trav->next;
			while (trav != veran)
			{
				temp++;
				trav = trav->next;
			}

			return (temp);
		}

		trav = trav->next;
		veran = (veran->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t jared, xed = 0;

	jared = looped_listint_len(head);

	if (jared == 0)
	{
		for (; head != NULL; jared++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (xed = 0; xed < jared; xed++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (jared);
}





