#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: initial value
 * @m: another  number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g, hesabu = 0;
	unsigned long int trav;
	unsigned long int refu = n ^ m;

	for (g = 63; g >= 0; g--)
	{
		trav = refu >> g;
		if (trav & 1)
			hesabu++;
	}

	return (hesabu);
}



