#include "main.h"

/**
 * create_file - A function that Creates a file.
 * @filename: Pointer variable to the name of the file to create.
 * @text_content: Ppointer reference to a string to write to the file.
 * Return: If already it exists truncate it.else if the function
 * fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int filedec, wrt, urefu = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (urefu = 0; text_content[urefu];)
urefu++;
}

filedec = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wrt = write(filedec, text_content, urefu);

if (filedec == -1 || wrt == -1)
return (-1);
close(filedec);
return (1);
}


