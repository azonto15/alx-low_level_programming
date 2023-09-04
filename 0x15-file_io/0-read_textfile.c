#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: The file-document being read
 * @letters: The ultimate count of the letters to be read
 * Return: Returns the actual number of the bytes read and printed
 * if the files fails to open,is Null,has unexpected byte count returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *bafa;
ssize_t filedec;
ssize_t wrt;
ssize_t tar;

filedec = open(filename, O_RDONLY);
if (filedec == -1)
return (0);
bafa = malloc(sizeof(char) * letters);
tar = read(filedec, bafa, letters);
wrt = write(STDOUT_FILENO, bafa, tar);

free(bafa);
close(filedec);
return (wrt);
}


