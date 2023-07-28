#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
* free_list - a function that frees a list_t list
* @head: A pointer to the list to be freed
*/
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}


