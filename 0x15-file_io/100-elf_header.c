#include "main.h"
/* header */

void elf_checker(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void class(unsigned char *e_ident);
void data(unsigned char *e_ident);
void version(unsigned char *e_ident);
void OS_ABI(unsigned char *e_ident);
void ABI(unsigned char *e_ident);
void type(unsigned int e_type, unsigned char *e_ident);
void entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int num);

/**
* elf_checker - checks if ELF file exists
*
* @e_ident: unsigned char pointer to an arry of ELF magic numbers
*
* Description: this function checks if a file
* is an ELF file and if not it exit with error 98
*
* Return: void
*/

void elf_checker(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}


/**
* magic - print magic file
*
* @e_ident: unsigned char pointer to an array of ELF magic numbers
*
* Description: this function prints magic numbers
* it can find and sepreate them by spaces
*
* Return: void
*/
void magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}


/**
* class - print class
*
* @e_ident: unsigned char pointer to an array of ELF class
*
* Description: this function prints a class
*
* Return: void
*/

void class(unsigned char *e_ident)
{

	printf("  Class:                             ");

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
			printf("<unknown bit: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
* data - prints data
*
* @e_ident: unsigned char pointer to an array of ELF class
*
* Description: this function prints data of an ELF header
*
* Return: void
*/

void data(unsigned char *e_ident)
{
	printf("  Data:                              ");

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
* version - prints version of ELF header
*
* @e_ident: unsigned char pointer to an array of ELF version
*
* Description: this function prints the current version of an ELF header
*
* Return: void
*/

void version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
	}
}



/**
* OS_ABI - prints OS/ABI of ELF header
*
* @e_ident: unsigned char pointer to an array of ELF version
*
* Description: this function porints the operating system
* or application binary interface of an ELF header
*
* Return: void
*/

void OS_ABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

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
* ABI - prints abi version of ELF header
*
* @e_ident: unsigned char pointer to an array of ELF ABI version
*
* Description: this function prints the abi version of an ELF version
*
* Return: void
*/

void ABI(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}



/**
* type - get type of ELF header
*
* @e_type: unsigned int of ELF type
*
* @e_ident: unsigned char pointer to ELF class
*
* Description: this function prints the type of an ELF header
*/

void type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

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
* entry - prints entry of ELF header
*
* @e_entry: unsigned long int of address of ELF entry point
*
* @e_ident: unsigned char to an array of ELF class
*
* Description: this function prints the entry point of an ELF header
*
* Return: void
*/

void entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}



/**
* close_elf - closes the ELF header
*
* @num: file descriptor
*
* Description: this function closes the ELF header/file
* if not exit with error 98
*
* Return: void
*/

void close_elf(int num)
{
	if (close(num) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", num);
		exit(98);
	}
}


/**
* main - Print the information in the ELF header form the start
*
* @argc: int type
*
* @argv: char array
*
* Description: this fnction display the information in the
* ELF header if file is not ELF file or function fail exit 98
*
* Return: 0 if success
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int file, readf;
	Elf64_Ehdr *h;

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	readf = read(file, h, sizeof(Elf64_Ehdr));
	if (readf == 1)
	{
		free(h);
		close_elf(file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_checker(h->e_ident);
	printf("ELF Header:\n");
	magic(h->e_ident);
	class(h->e_ident);
	data(h->e_ident);
	version(h->e_ident);
	OS_ABI(h->e_ident);
	ABI(h->e_ident);
	type(h->e_type, h->e_ident);
	entry(h->e_entry, h->e_ident);

	free(h);
	close_elf(file);
	return (0);
}
