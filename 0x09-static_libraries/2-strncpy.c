#include "main.h"
/**
 * _strncpy - To copy a string
 * @dest: First input value
 * @src: Second input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}

return (dest);
}



