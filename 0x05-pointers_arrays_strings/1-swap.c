#include <stdio.h>

/**
*swap_int - Swaps the vaues of two integers
*@a: The first interger to be swaped
*@b: The second integer to be swaped
*Return: Always 0.
*/

void swap_int(int *a, int *b)
/* The function that swaps the vaues of two inters*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
