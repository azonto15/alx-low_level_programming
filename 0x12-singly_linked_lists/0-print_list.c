#include <stdio.h>
#include "lists.h"

/**
* print_list - a function that prints all the elements of a list_t list
* @*h: Refers to the pointer of the  list to print
* Return: count of  nodes to be printed
*/
size_t print_list(const list_t *h)
{
size_t a = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
a++;
}

return (a);
}



