#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description:a program that prints the alphabet in lowercascase,i
 * followed by a new line.
 * return 0 on success
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
