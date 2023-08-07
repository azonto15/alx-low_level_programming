#include "main.h"
#include <stdlib.h>

/**
* read_textfile- a function that reads a text file and prints it to the
* POSIX standard output.
i* @filename: The file to be read
* @letters: Letters to be read
* Return: actual number of letters it could read if successful or 0 if it
* fails or NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd, andika, j;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
j = read(fd, buf, letters);
andika = write(STDOUT_FILENO, buf, j);

free(buf);
close(fd);
return (andika);
}


