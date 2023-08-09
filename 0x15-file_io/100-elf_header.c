#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_os_abi(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf-file>\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		perror("read");
		close(fd);
		return (1);
	}

	if (bytes_read != sizeof(header))
	{
		fprintf(stderr, "read: Incomplete header read\n");
		close(fd);
		return (1);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "read: Not an ELF file\n");
		close(fd);
		return (1);
	}

	print_magic(header.e_ident);
	print_class(header.e_ident);
	print_data(header.e_ident);
	print_version(header.e_ident);
	print_os_abi(header.e_ident);
	print_type(header.e_type);
	print_entry(header.e_entry);

	close(fd);
	return (0);
}

/**
 * print_magic - Print ELF magic numbers
 * @e_ident: ELF identification array
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n  Magic:");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", e_ident[i]);
	printf("\n");
}

/**
 * print_class - Print ELF class
 * @e_ident: ELF identification array
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Invalid ELF class\n");
		break;
	}
}

/**
 * print_data - Print ELF data encoding
 * @e_ident: ELF identification array
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Invalid data encoding\n");
		break;
	}
}

/**
 * print_version - Print ELF version
 * @e_ident: ELF identification array
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf(" (unknown)\n");
}

/**
 * print_os_abi - Print ELF OS/ABI
 * @e_ident: ELF identification array
 */
void print_os_abi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("TRU64 UNIX\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM architecture\n");
		break;
	default:
		printf("Unknown OS/ABI\n");
		break;
	}
}

/**
 * print_type - Print ELF type
 * @e_type: ELF type
 */
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
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
		printf("Unknown type\n");
		break;
	}
}

/**
 * print_entry - Print ELF entry point address
 * @e_entry: ELF entry point address
 */
void print_entry(unsigned long int e_entry)
{
	printf("  Entry point address:               0x%lx\n", e_entry);
}

