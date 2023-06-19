#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description:a program that prints all single digit numbers of base 10
 *starting from 0, followed by a new line.
 * followed by a new line.
 * return 0 on success
 */
int main(void)
{
        char c = '0';

        while (c <= '9')
        {
                putchar(c);
                c++;
        }
        putchar('\n');
        return (0);
}
