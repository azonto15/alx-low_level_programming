#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by de
 * @dest: destination copy location
 * @src: copy from the source
 * Return: string output
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int y = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; y < l ; y++)
{
dest[y] = src[y];
}
dest[l] = '\0';
return (dest);
}







