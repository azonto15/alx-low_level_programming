#include <stdio.h>
/**
*Main - list all the natural numbers below 10 that are multiples of 3 or 5,
*Return: The sum of multiles of 3 and 5
*/                                                                              

int main(void)
{
int j, sum = 0;

for (j = 0; j < 1024; ++j)
{
if ((j % 3) == 0 || (j % 5) == 0)
sum += j;
	}
printf("%d\n", sum);

return (0);
}


