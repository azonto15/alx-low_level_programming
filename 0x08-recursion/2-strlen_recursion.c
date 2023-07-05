#include "main.h"
/**
 * _strlen_recursion - A function tha Returns the length of a string.
 * @s:  string value.
 * Return: String length.
 */
int _strlen_recursion(char *s)
{
int longit = 0;

if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}

