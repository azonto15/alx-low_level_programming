#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description:a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;
	
	while (c < 10)
	{
	putchar(48 + c);
	c++;
	}
	putchar('\n');
	return (0);
}
