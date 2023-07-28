#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node_end - a function that adds a new node at the end of a list_t list.
* @**head: A double pointer to the list
* @str: A string to be inserted to the new node
* Return: Return the address of the new member or NULL if unsuccessful
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int length = 0;

while (str[length])
length++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->length = length;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}



