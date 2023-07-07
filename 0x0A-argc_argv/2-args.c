#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: arguments
 * @argv: argument array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int a;

for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}

return (0);
}

