#include "main.h"

/**
 * print_binary -  a function that prints the binary representation of
 * a number.
 * @n: Value to be printinted in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int trav;
	int k, bara = 0;

	for (k = 63; k >= 0; k--)
	{
		trav = n >> k;

		if (trav & 1)
		{
			_putchar('1');
			bara++;
		}
		else if (bara)
			_putchar('0');
	}
	if (!bara)
		_putchar('0');
}


