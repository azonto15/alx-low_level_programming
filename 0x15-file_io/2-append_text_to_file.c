#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: Pointer element to the file.
 * @text_content: String tobe added at the end of the file.
 * Return: 1 on success and -1 on failure.
 * Do not create the file if it does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fung, k, refu = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (refu = 0; text_content[refu];)
			refu++;
	}

	fung = open(filename, O_WRONLY | O_APPEND);
	k = write(fung, text_content, refu);

	if (fung == -1 || k == -1)
		return (-1);

	close(fung);

	return (1);
}

