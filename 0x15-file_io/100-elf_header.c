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

