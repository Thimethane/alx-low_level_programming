#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <elf.h>

void print_error(char* msg) 
{
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

void print_elf_header(const Elf64_Ehdr* header) 
{
	int i;
	
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) 
	{
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "UNIX - Other");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : ((header->e_type == ET_DYN) ? "DYN (Shared object file)" : ((header->e_type == ET_REL) ? "REL (Relocatable file)" : "Unknown")));
    printf("  Entry point address:               %lx\n", header->e_entry);
}

int main(int argc, char** argv) 
{
	Elf64_Ehdr header;
	char* filename = argv[1];
	int fd;
	
    if (argc != 2) 
	{
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(filename, O_RDONLY);
    if (fd < 0)
        print_error("Failed to open file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
        print_error("Failed to read ELF header");

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
        print_error("File is not an ELF file");

    print_elf_header(&header);

    close(fd);
    return (0);
}
