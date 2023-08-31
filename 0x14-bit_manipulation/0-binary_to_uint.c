#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to
 * unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: Return converted number or 0 if there is more than
 * one chars in string
 */
unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int desimal = 0;

if (!b)
return (0);

for (k = 0; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
return (0);
desimal = 2 * desimal + (b[k] - '0');
}
return (desimal);
}



