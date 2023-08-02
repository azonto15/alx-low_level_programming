#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: The first nod/member in the linked list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
int add = 0;
listint_t *trav;
trav = head;

if (head == NULL)
{
return (0);
}
while (trav)
{
add += trav->n;
trav = trav->next;
}

return (add);
}
