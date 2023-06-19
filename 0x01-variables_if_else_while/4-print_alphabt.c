#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description:a program that prints the alphabet in lowercascase
 * and in upper case, followed by a new line
 * followed by a new line.
 * Return:0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
