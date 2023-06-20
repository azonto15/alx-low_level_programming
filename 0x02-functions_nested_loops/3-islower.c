#include "main.h"
#include<stdio.h>
/**
*_islower - check for lower case character
*@c: the charcter to be checkled
*Return 1 for lower case or 0 for naytheing else
*/

int _islower(int c)
{
		if (c > 97 && c <= 122)
		{
			return (1);
		}
		return (0);
}
