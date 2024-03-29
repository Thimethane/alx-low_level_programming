#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <elf.h>

void print_error(char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header->e_ident[i]);
    printf("\n");
    printf("Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Unknown");
    printf("Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown");
    printf("Version:                           %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              %d\n", header->e_type);
    printf("Entry point address:               %lx\n", header->e_entry);
}

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error: Unable to open file");
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Error: Unable to read file header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Error: Not an ELF file");
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}
