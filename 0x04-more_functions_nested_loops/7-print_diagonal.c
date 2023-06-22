#include "main.h"
/**
* print_diagonal - a function that draws a diagonal line on the terminal.
* @n: number of times the diagnol line will be printed
* Return:
*/
void print_diagonal(int n)
{
int x, y;

if (n <= 0)
{
_putchar("\n");
}
else
{
for (x = 0; x < n; x++)
for (y = 0; y < x; y++)
{
_putchar(32);
}
else
{
_putchar(92);
_putchar("\n");
}
}
}
