#include "main.h"
#include <stdio.h>
/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @n: Function pointer
 * Return: n
 */
char *string_toupper(char *n)
{
int a = 0 ;

while (n[a] != '\0')
{
if (n[a] >= 'a' && n[a] <= 'z')
n[a] = n[a] - 32;
a++;
}
return (n);
}















