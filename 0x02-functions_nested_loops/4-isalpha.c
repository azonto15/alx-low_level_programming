#include "main.h"
#include<stdio.h>
/**
* _isalpha - check for lower case character
* @c: the charcter to be checkled
* Return: 1 for alphabetic  character  character or 0 for naytheing else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
