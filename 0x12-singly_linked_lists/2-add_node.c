#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* *add_node - a function that adds a new node at the beginning of
* a list_t list.
* @**head: double pointer to the list
* @str: The string to be added in the node
* Return: NULL if it fails or address of the new element.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int length = 0;

while (str[length])
length++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->length = length;
new->next = (*head);
(*head) = new;

return (*head);
}




