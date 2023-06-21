#include "main.h"
#include<stdio.h>
/**
* print_sign - check for lower case character
* @c: The number to checked
* Return: 1 for postive number or 0 for negative number and  naytheing else
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar (48);
return (0);
}

}
