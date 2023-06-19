#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description:a program that prints all possible
 * different combinations of two digits. ,
 * followed by a new line,  return 0 on success
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10);
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);
					if (c + d + e != 9 + 8 + 7)
					{
						puchar(', ');
						putchar(' ');
					}
				}
				c++;
			}
			c++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
44,1          Bot
