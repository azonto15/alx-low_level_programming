#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int desimal = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		desimal = 2 * desimal + (b[j] - '0');
	}

	return (desimal);
}




