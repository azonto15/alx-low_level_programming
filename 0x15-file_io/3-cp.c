#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Assigns 1024 bytes used as a buffer.
 * @file: The file buffer which stores chars elements.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - The function that Closes the file descriptors.
 * @fd: The file to be closed.
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A function that copies the contents of a file to a new  file.
 * @argc: count of elements available for processing
 * @argv: pointer array to elements.
 *
 * Return: 0 if succeeds
 *
 * Description: Show exit code 97 If the argument count is incorrect.
 * Showexit code 98 if file_from does non- existence or file unreadable.
 * Show exit code 99 if file_to cannot be created or is readonly
 * Show exit code 100 if file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int start, end, j, u;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	j = read(start, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		u = write(end, buffer, j);
		if (end == -1 || u == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		j = read(start, buffer, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	}
	while (j > 0)
	{
	free(buffer);
	close_file(start);
	close_file(end);

	return (0);
}


