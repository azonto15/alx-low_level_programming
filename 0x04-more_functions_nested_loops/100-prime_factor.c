#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* main - prints the largest prime factor of the number 612852475143,
* followed by a new line.
* Return: Aways 0 (Success)
*/

int main(void)
{long int m;
long int  maxf;
long int l;

m = 612852475143;
maxf = -1;
while (m % 2 == 0)
{
maxf = 2;
m /= 2;
}
for (l = 3; l <= sqrt(m); l = l + 2)
{
while (m % l == 0)
{
maxf = l;
m = m / l;
}
}
if (m > 2)
maxf = m;
printf("%ld\n", maxf);
return (0);
}

