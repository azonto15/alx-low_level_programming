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
/**
 * print_class - The function Prints the class of the ELF header.
 * @e_ident: pointer element that points to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
printf(" Class: ");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_data - The function Prints the exact data on the  ELF header.
 * @e_ident:  Pointer variable to the ELF class array.
 */
void print_data(unsigned char *e_ident)
{
printf(" Data: ");

switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 ** print_version - The function Prints the version of an ELF header.
 * @e_ident: ELF verrsion pointer.
 **/
void print_version(unsigned char *e_ident)
{
printf(" Version: %d",
e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
 * print_osabi - This function Prints the OS/ABI of an ELF header.
 * @e_ident:The Pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *e_ident)
{
printf(" OS/ABI: ");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
 * print_abi - The function that Prints the ABI version header.
 * @e_ident: The pointer element to the array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
printf(" Abi Version: %d\n",
e_ident[EI_ABIVERSION]);
}

/**
 * print_type - The function that prints the type of an ELF header.
 * @e_type:The ELF version type.
 * @e_ident:The pointer element to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf(" Type: ");

switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}

/**
* print_entry - The function will Print the entry point of an ELF header.
* @e_entry: Address of the ELF entry point.
* @e_ident: Pointer element to an array containing the ELF class.
*/
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf(" Entry point address: ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);

else
printf("%#lx\n", e_entry);
}

/**
* close_elf - The function will Closes an ELF file.
* @trav: ELF file descvriptor
* Description: If the file cannot be closed - exit code 98.
*/
void close_elf(int trav)
{
if (close(trav) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", trav);
exit(98);
}
}

/**
* main - The function will Displays the information contained in the
* ELF header at the start of an ELF file.
* @argc: Count of variables supplied to the program.
* @argv: Pointer array of arguments.
*
* Return: 0 on success.
* Description: When the file/s is non-ELF File or
* the function fails - exit code 98.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int u, k;

u = open(argv[1], O_RDONLY);
if (u == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(u);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
k = read(u, header, sizeof(Elf64_Ehdr));
if (k == -1)
{
free(header);
close_elf(u);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abi(header->e_ident);
print_type(header->e_type, header->e_ident);
print_entry(header->e_entry, header->e_ident);

free(header);
close_elf(u);
return (0);
}


