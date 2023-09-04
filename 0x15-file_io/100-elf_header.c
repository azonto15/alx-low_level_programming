void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);

/**
 * check_elf - A function that Checks if a file is an ELF file.
 * @e_ident: Pointer variable to an array containing the ELF magic numbers.
 * Description: Returns exit-code 98 if the file is not an ELl File
 */
void check_elf(unsigned char *e_ident)
{
int indk;

for (indk = 0; indk < 4; indk++)
{
if (e_ident[indk] != 127 &&
e_ident[indk] != 'E' &&
e_ident[indk] != 'L' &&
e_ident[indk] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
* print_magic - A function tat Prints the magic numbers of an ELF header.
* @e_ident: The pointer variable to an array containing the ELF magic numbers.
* Description: The Magic numbers are separated by spaces.
*/
void print_magic(unsigned char *e_ident)
{
int indk;

printf(" Magic: ");

for (indk = 0; indk < EI_NIDENT; indk++)
{
printf("%02x", e_ident[indk]);

if (indk == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

