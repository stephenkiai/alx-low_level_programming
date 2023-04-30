#include "main.h"
#include <string.h>
#include <elf.h>
/**
 * print_error - Prints an error message to stderr and exits with code 98.
 * @message: The error message to print.
 *
 * Description: This function prints the given error message to stderr and exits
 * with status code 98.
 */
void print_error(char* message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_header_info - Prints the information contained in the ELF header.
 * @ehdr: A pointer to the ELF header structure.
 *
 * Description: This function prints the information contained in the ELF header
 * structure in the format specified in the prompt.
 */
void print_header_info(Elf64_Ehdr *ehdr)
{
	int i;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class");
	printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Invalid data encoding");
	printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", ehdr->e_ident[EI_OSABI] == 0 ? "UNIX System V ABI" : "Other ABI");
	printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" : ehdr->e_type == ET_DYN ? "DYN (Shared object file)" : "Invalid type");
	printf("  Entry point address:               %lx\n", ehdr->e_entry);
}

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: This function checks if the given file is an ELF file by
 * verifying that the first four bytes of the file match the ELF magic number.
 * If the file is not an ELF file, it prints an error message to stderr and exits
 * with status code 98.
 */
void check_elf(unsigned char *e_ident)
{
	if (memcmp(e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("File is not an ELF file");
	}
}
/**
 * main - Reads and displays the information contained in the ELF header
 *        at the start of an ELF file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments passed to the program.
 * Return: 0 if successful, 98 if there was an error.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;
	ssize_t num_bytes_read;
	if (argc != 2)
	{
		print_error("Incorrect number of arguments");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Unable to open file");
	}

	num_bytes_read = read(fd, &ehdr, sizeof(Elf64_Ehdr));
	if (num_bytes_read != sizeof(Elf64_Ehdr))
	{
		print_error("Unable to read ELF header");
	}
	check_elf(ehdr.e_ident);
	print_header_info(&ehdr);
	close(fd);
	return (0);
}
