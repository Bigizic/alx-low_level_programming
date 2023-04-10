#include "main.h"
/* header */

void elf_checker(unsigned char *num);
void magic(unsigned char *num);
void class(unsigned char *num);
void data(unsigned char *num);
void version(unsigned char *num);
void OS_ABI(unsigned char *num);
void ABI(unsigned char *num);
void type(unsigned char *num);
void entry(unsigned char *num);
void close_elf(unsigned char *num);

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
* @num: unsigned char pointer to an array of ELF numbers
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
* @num: unsigned char pointer to an array of ELF numbers
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
* @num: unsigned char pointer to an array of ELF numbers
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
* @num: unsigned char pointer to an array of ELF numbers
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
* @num: unsigned char pointer to an array of ELF numbers
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

