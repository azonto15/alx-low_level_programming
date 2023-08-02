#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - a function that returns the number of elements in a linked
* listint_t list.
* @h: List link name
* Return: Count of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
int count = 0;
if (h == 0)
printf("The list is empty");
while (h != 0)
{
count++;
h = h->next;
}
return (count);
}
