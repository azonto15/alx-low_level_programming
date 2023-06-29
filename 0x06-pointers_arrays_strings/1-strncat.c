#include "main.h"
/**
 * _strncat - A function that concatenates two strings.
 * using at most n bytes from src
 * @dest: First input value
 * @src: Second input value
 * @n: Third input value
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b;

while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}


