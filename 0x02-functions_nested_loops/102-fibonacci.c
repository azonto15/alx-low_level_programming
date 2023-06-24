#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
int cnt;
unsigned long num1 = 0, num2 = 1, sum;
for (cnt = 0; cnt < 50; cnt++)
{
sum = num1 + num2;
printf("%lu", sum);

num1 = num2;
num2 = sum;
}
if (cnt != 49)
{
printf(", ");
if (i == 49)
{
printf("\n ");
}
return (0);
}
}


