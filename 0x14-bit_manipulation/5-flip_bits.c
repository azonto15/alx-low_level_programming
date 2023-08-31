#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * to get from one number to another
 * @n:Initial number varaible
 * @m: The second  interger variable
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, hesabu = 0;
unsigned long int cur;
unsigned long int trav = n ^ m;

for (k = 63; k >= 0; k--)
{
cur = trav >> k;
if (cur & 1)
hesabu++;
}

return (hesabu);
}


