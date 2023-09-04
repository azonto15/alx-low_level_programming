#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This fuction allocates 1024 bytes for a buffer.
 * @file: This is a file variable name of the file buffer
 * is storing chars for.
 * Return: Returns a pointer variabe to the buffer that is created.
 */
char *create_buffer(char *file)
{
char *bafa;

bafa = malloc(sizeof(char) * 1024);

if (bafa == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (bafa);
}

/**
 * close_file - The function will Close the  file descriptors.
 * @fd: Variable for file descriptor to be closed.
 */
void close_file(int filedec)
{
int clos;

clos = close(filedec);
if (clos == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedec);
exit(100);
}
}

/**
 * main - The file that Copies file contents to another file.
 * @argc  arguments count passed to the program.
 * @argv: pointers collection(array)to the arguments.
 * Return: Returns 0 if it succeds.
 * Description: for incorrect argument count return - exit code 97.
 * else If file_from is non- existent or cannot be read - exit code 98.
 * else If file_to cannot be created or written to - exit code 99.
 * ese If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int frm, to, rd, wrt;
char *bafa;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

bafa = create_buffer(argv[2]);
frm = open(argv[1], O_RDONLY);
rd = read(frm, bafa, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (frm == -1 || rd == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(bafa);
exit(98);
}

wrt = write(to, bafa, rd);
if (to == -1 || wrt == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(bafa);
exit(99);
}

rd = read(frm, bafa, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (rd > 0);

free(bafa);
close_file(frm);
close_file(to);

return (0);
}


