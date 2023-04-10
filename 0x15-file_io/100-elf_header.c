#include "main.h"
/* header */

void elf_checker(unsigned char *num);
void magic(unsigned char *num);
void class(unsigned char *num);
void data(unsigned char *num);
void version(unsigned char *num);
void OS_ABI(unsigned char *num);
void ABI(unsigned char *num);
void type(unsigned int t, unsigned char *num);
void entry(unsigned long int e, unsigned char *num);
void close_elf(int num);

/**
* elf_checker - checks if ELF file exists
*
* @num: unsigned char pointer to an arry of ELF magic numbers
*
* Description: this function checks if a file is an ELF file and if not it exit with error 98
*
* Return: void
*/

void elf_checker(unsigned char *num)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (num[i] != 127 && num[i] != 'E' && num[i] != 'L' && num[i] != 'F')
		{
			drpintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}


/**
* magic - print magic file
*
* @num: unsigned char pointer to an array of ELF magic numbers
*
* Description: this function prints magic numbers it can find and sepreate them by spaces
*
* Return: void
*/
void magic(unsigned char *num)
{
	int i;
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", num[i]);
		if (i == EI_NIDENT -1)
			printf("\n");
		else
			printf(" ");
	}
}


/**
* class - print class
*
* @num: unsigned char pointer to an array of ELF class
*
* Description: this function prints a class
*
* Return: void
*/

void class(unsigned char *num)
{

	printf("  Class:                             ");

	switch (num[EI_CLASS])
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
			printf("<unknown bit: %x>\n", num[EI_CLASS]);
	}
}


/**
* data - prints data
*
* @num: unsigned char pointer to an array of ELF class
*
* Description: this function prints data of an ELF header
*
* Return: void
*/

void data(unsigned char *num)
{
	pritnf("  Data:                              ");

	switch(num[EI_DATA])
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
			printf("<unknown: %x>\n", num[EI_CLASS]);
	}
}


/**
* version - prints version of ELF header
*
* @num: unsigned char pointer to an array of ELF version
*
* Description: this function prints the current version of an ELF header
*
* Return: void
*/

void version(unsigned char *num)
{
	printf("  Version:                           %d",
			num[EI_VERSION]);

	switch (num[EI_VERSION])
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
* @num: unsigned char pointer to an array of ELF version
*
* Description: this function porints the operating system
* or application binary interface of an ELF header
*
* Return: void
*/

void OS_ABI(unsigned char *num)
{
	printf("  OS/ABI:                            ");

	switch (num[EI_OSABI])
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
			prin5f("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", num[EI_OSABI]);
	}
}


/**
* ABI - prints abi version of ELF header
*
* @num: unsigned char pointer to an array of ELF ABI version
*
* Description: this function prints the abi version of an ELF version
*
* Return: void
*/

void ABI(unsigned char *num)
{
	printf("  ABI Version:                       %d\n",
			num[EI_ABIVERSION]);
}



/**
* type - get type of ELF header
*
* @t: unsigned int of ELF type
*
* @num: unsigned char pointer to ELF class
*
* Description: this function prints the type of an ELF header
*/

void type(unsigned int t, unsigned char *num)
{
	if (num[EI_DATA] == ELFDATA2MSB)
		t >>= 8;

	printf("  Type:                              ");

	switch (t)
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
			printf("<unknown: %x>\n", t);
	}
}



/**
* entry - prints entry of ELF header
*
* @e: unsigned long int of address of ELF entry point
*
* @num: unsigned char to an array of ELF class
*
* Description: this function prints the entry point of an ELF header
*
* Return: void
*/

void entry(unsigned long int e, unsigned char *num)
{
	printf("  Entry point address:               ");

	if (num[EI_DATA] == ELFDATA2MSB)
	{
		e = ((e << 8) & 0xFF00FF00) | ((e >> 8) & 0xFF00FF);
		e = (e << 16) | (e >> 16);
	}

	if (num[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e);

	else
		printf("%#lx\n", e);
}



/**
* close_elf - closes the ELF header
*
* @num: file descriptor
*
* Description: this function closes the ELF header/file if not exit with error 98
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

