#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: The pointer variable to the number tobe changed
 * @index: The index, starting from 0 of the bit you want to set
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}


