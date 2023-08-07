#include "main.h"

/**
* create_file - A function that Creates a file.
* @filename:  Pointer parameter to the file to be generated
* @text_content: Pointer parameter to the source file.
* Return: if filename is NULL return -1.if text_content is NULL create
* an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, adk, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	adk = write(fd, text_content, count);

	if (fd == -1 || adk == -1)
		return (-1);

	close(fd);

	return (1);
}



