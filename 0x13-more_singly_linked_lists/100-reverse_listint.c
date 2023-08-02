#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: A pointer to the first noDE.
 * Return: A pointer to the first node in the new list
 **/
listint_t *reverse_listint(listint_t **head)
{
listint_t *algo = NULL;
listint_t *next = NULL;
if (*head == NULL)
{
return (0);
}
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = algo;
algo = *head;
*head = next;
}
*head = algo;
return (*head);
}

