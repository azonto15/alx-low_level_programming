#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description:program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
