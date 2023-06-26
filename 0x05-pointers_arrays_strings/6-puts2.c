#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string pointer variable
 * Return: print string characters
 */
void puts2(char *str)
{
int m = 0;
int k = 0;
char *j = str;
int i;

while (*j != '\0')
{
j++;
m++;
}
k = m - 1;
for (i = 0 ; i <= k ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}










