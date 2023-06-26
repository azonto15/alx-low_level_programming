#include <stdio.h>

/**
* _strlen - Returns the length of atsring
* @*_strlen: The string which we will find the length
* @str - a Variable member for string length
* Return: The length of @str
*/
int _strlen(char *str)
{
size_t length = 0;

while (*str++)
length++;
return (length);
}
