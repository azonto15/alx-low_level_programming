#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int p;
int x;

for (p = 0; p < n--; p++)
{
x = a[p];
a[p] = a[n];
a[n] = x;
}
}




