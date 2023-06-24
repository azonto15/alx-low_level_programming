#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued
*terms followed by a new
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
unsigned long int m, n, nxt, sum;

m = 1;
n = 2;
sum = 0;

for (a = 1; a <= 33; ++a)
{
if (m < 4000000 && (m % 2) == 0)
{
sum = sum + m;
}
nxt = m + n;
m = n;
n = nxt;
}
printf("%lu\n", sum);
return (0);
}

