#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int j, summ, z;

summ = 0;

srand(time(NULL));

for (j = 0; j < 100; j++)
{
pass[j] = rand() % 78;
summ += (pass[j] + '0');
putchar(pass[j] + '0');
if ((2772 - summ) -'0' < 78)
{
z = 2772 - summ - '0';
summ += z;
putchar(z + '0');
break;
}
}

return (0);
}


