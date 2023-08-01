i#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - a function that adds a new node at the
* end of a listint_t list.
* @head:Is a pointer to the first element in the list
* @n: data to insert in the new element
* Return: String Length
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *add;
listint_t *trav;
trav = *head;
trav = malloc(sizeof(listint_t));
if (!add)
return (NULL);
add->n = n;
add->next = NULL;
if (*head == NULL)
{
*head = add;
return (add);
}
while (trav->next)
trav = trav->next;
trav->next = add;
return (add);
}

