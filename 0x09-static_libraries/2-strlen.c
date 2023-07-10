#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int jd = 0;

	while (*s != '\0')
	{
		jd++;
		s++;
	}

	return (jd);
}


