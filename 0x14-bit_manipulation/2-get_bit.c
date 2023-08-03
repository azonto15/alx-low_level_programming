#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: search number
 * @index: location of the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int h;

	if (index > 63)
		return (-1);

	h = (n >> index) & 1;

	return (h);
}



