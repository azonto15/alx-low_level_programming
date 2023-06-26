#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: String input variable
 * Return: half of a string
 */
void puts_half(char *str)
{
int z, j, m;

m = 0;

for (z = 0; str[z] != '\0'; z++)
m++;

j = (m / 2);

if ((m % 2) == 1)
j = ((m + 1) / 2);

for (z = j; str[z] != '\0'; z++)
_putchar(str[z]);
_putchar('\n');
}













