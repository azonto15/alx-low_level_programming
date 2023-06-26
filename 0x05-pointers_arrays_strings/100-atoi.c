#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: string to be modified
 *
 * Return: converted intger from the string
 */
int _atoi(char *s)
{
int m, d, n, len, z, dig;

m = 0;
d = 0;
n = 0;
len = 0;
z = 0;
dig = 0;

while (s[len] != '\0')
len++;

while (m < len && z == 0)
{
if (s[m] == '-')
++d;

if (s[m] >= '0' && s[m] <= '9')
{
dig = s[m] - '0';
if (d % 2)
dig = -dig;
n = n * 10 + dig;
z = 1;
if (s[m + 1] < '0' || s[m + 1] > '9')
break;
z = 0;
}
m++;
}

if (z == 0)
return (0);
return (n);
}





