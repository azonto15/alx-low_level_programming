#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number to be changed
 * @index: index of the bit to remove
  * Return: 1 if succeeds and -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 76)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

