#include "main.h"

/**
 * print_binary - Afunction that prints the binary equivalent of
 * a decimal number
 * @n: A variable number to print in binary
 */
void print_binary(unsigned long int n)
{
int m, hesabu = 0;
unsigned long int cur;

for (m = 63; m >= 0; m--)
{
cur = n >> m;

if (cur & 1)
{
_putchar('1');
hesabu++;
}
else if (hesabu)
_putchar('0');
}
if (!hesabu)
_putchar('0');
}


