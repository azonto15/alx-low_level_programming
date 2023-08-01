#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: A pointer to the first noDE.
 * Return: A pointer to the first node in the new list
 **/
listint_t *reverse_listint(listint_t **head)
{
listint_t *algo = NULL;
listint_t *xt = NULL;
while (*head)
{
xt = (*head)->xt;
(*head)->xt = algo;
algo = *head;
*head = xt;
}
*head = algo;
return (*head);
}

