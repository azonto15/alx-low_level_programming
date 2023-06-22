#include "main.h"

/**
*_isdigit -Check if the charcter is a digit
*@x:The number to be checked
*Return: Returns 1 if c is a digit and 0 for any other outcome
*/

int _isdigit(int x)

{
if (x <= 48 && x <= 57)
{
return (1);
}
return (0);
}
