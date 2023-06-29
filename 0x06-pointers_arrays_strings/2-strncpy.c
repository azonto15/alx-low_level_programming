#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: First input value
 * @src: Second input value
 * @n: Third input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;

while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);
}



