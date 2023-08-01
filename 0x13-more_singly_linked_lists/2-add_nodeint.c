#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning of a
* listint_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *trav;

trav = (listint_t *)malloc(sizeof(listint_t));
if (trav == NULL)
{
return (NULL);
}
trav->n = n;
trav->next = *head;
*head = trav;
return (trav);
}

