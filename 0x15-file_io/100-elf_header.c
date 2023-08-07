#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);

/**
 * print_magic - A function that  Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to a member array containing the  magic numbers.
  * Description: The numbers(magic) are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int trav;

	printf(" Magic: ");

	for (trav = 0; trav < EI_NIDENT; trav++)
	{
		printf("%02x", e_ident[trav]);

		if (trav == EI_NIDENT - 1)
			printf("\n");
		else
		printf(" ");
	}
}

