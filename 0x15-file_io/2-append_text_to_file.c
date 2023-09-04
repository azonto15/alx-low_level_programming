#include "main.h"

/**
 * append_text_to_file - This function Appends text at the end of a file.
 * @filename: Pointer variable to the name of the file.
 * @text_content: string to be added to the end of the file.
 * Return: Return -1If the function fails or filename is NULL
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int opn, wrt, urefu = 0;

if (!filename)
return (-1);

if (text_content)
{
for (urefu  = 0; text_content[urefu];)
urefu++;
}

opn = open(filename, O_WRONLY | O_APPEND);
wrt = write(opn, text_content, urefu);

if (opn == -1 || wrt == -1)
return (-1);
close(opn);
return (1);
}

