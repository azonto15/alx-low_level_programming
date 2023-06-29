#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: First input  value
 * @src: Second input value
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
int m;
int a;

a = 0;
while (dest[a] != '\0')
{
a++;
}
m = 0;
while (src[m] != '\0')
{
dest[a] = src[m];
a++;
m++;
}
dest[a] = '\0';
return (dest);
}



