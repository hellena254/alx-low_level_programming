#include "main.h"
#include <stdint.h>
#include <elf.h>

/**
 * print_error_and_exit - Print an error message to stderr and exit with a specific status code.
 * @status: The exit status code.
 * @msg: The error message to display.
 */

void print_error_and_exit(int status, const char *msg)
{
	fprintf(stderr, "%s", msg);
	exit(status);
}

/**
 * print_elf_header_info - Display the information contained in the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %u (current)\n", (unsigned int)header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %u>\n", (unsigned int)header->e_ident[EI_OSABI]);
			break;
	}
	printf("  ABI Version:                       %u\n", (unsigned int)header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		default:
			printf("<unknown: %u>\n", (unsigned int)header->e_type);
			break;
	}
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program. Reads the ELF header and displays its information.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line arguments.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int ac, char **av)
{
	int fd;
	ssize_t bytes_read;
	
	if (ac != 2)
		print_error_and_exit(98, "Usage: elf_header elf_filename\n");

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		print_error_and_exit(98, "Error: Can't open file\n");

	/*Elf64_Ehdr header;*/
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", av[1]);

	if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		print_error_and_exit(98, "Error: Not an ELF file\n");

	print_elf_header_info(&header);

	close(fd);
	return 0;
}

