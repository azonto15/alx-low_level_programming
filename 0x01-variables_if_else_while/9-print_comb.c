#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description: prints all single numbers of base 10,
 * startng from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
	{
		putchar(',');
		putchar(' ');
	}
	c++;
	}
}
