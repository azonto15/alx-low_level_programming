#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description:program that prints the alphabet in lowercase,
 * followed by a new line.
 * return 0 on success
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
