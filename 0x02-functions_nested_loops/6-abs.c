#include "main.h"
#include<stdio.h>
/**
 * _abs - Computes the abslute value of an integer
 * @c: The number to to be computed
 * Return: Absoulte number of a vlaue or zero
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
