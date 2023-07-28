#include <stdlib.h>
#include "lists.h"
#include "stdio.h"
/**
* list_len - a function that returns the number of elements in 
* a linked list_t list
* @*h:Is a  pointer to the list
* Return: The number of elements contained in h
*/
size_t list_len(const list_t *h)
{
size_t j = 0;

while (h)
{
j++;
h = h->next;
}
return (j);
}



