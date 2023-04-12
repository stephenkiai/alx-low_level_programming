#include "main.h"
/**
 *
 *
 *
 *
 */
#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
  int fd, i;
    Elf64_Ehdr header;
    /*char buf[BUF_SIZE];*/

    if (argc != 2)
      {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
      {
        perror("open");
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
      {
        perror("read");
        exit(98);
    }

    /* Check if it is an ELF file*/
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
      {
        fprintf(stderr, "%s is not an ELF file\n", argv[1]);
        exit(98);
    }

    /* Print ELF header information*/
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
      {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n",
           header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
           header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
           "Unknown");
    printf("  Data:                              %s\n",
           header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
           "Unknown");
    printf("  Version:                           %d (current)\n",
           header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n",
           header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
           header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - GNU" :
           "Unknown");
    printf("  ABI Version:                       %d\n",
           header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n",
           header.e_type == ET_REL ? "REL (Relocatable file)" :
           header.e_type == ET_EXEC ? "EXEC (Executable file)" :
           header.e_type == ET_DYN ? "DYN (Shared object file)" :
           header.e_type == ET_CORE ? "CORE (Core file)" :
           "Unknown");
    printf("  Entry point address:               %lx\n",
           header.e_entry);

    close(fd);
    return 0;
}
