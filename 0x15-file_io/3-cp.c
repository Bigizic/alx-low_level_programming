#include "main.h"
/* header */

/**
* main - contains two files and run the program
* @argc: int type, also points to the length of arguments passed
* @argv: char pointer to file names
* Return: a program that read firstFile and write to secondFile
*/

int main(int argc, char *argv[])
{
	int file1, file2, print, read2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(BUFFER * sizeof(char));
	if (buffer == NULL)
		return (-1);

	file1 = open(argv[1], O_RDONLY);
	readError(file1, buffer, argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
	fchmod(file2, 0664);
	writeError(file2, buffer, argv[2]);
	do {
		read2 = read(file1, buffer, BUFFER);

		if (read2 ==  0)
			break;
		readError(read2, buffer, argv[1]);
		print = write(file2, buffer, read2);
		writeError(print, buffer, argv[2]);
	} while (print >= BUFFER);
	read2 = close(file2);
	closeError(read2, buffer);
	read2 = close(file1);
	closeError(read2, buffer);
	free(buffer);
	return (0);
}


/**
* file1Error - handle error 98
* @f1: int type
* @buff: char pointer
* @av: char pointer
* description: error message
*/

void readError(int f1, char *buff, char *av)
{

	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		free(buff);
		exit(98);
	}

}


/**
* file2Error - handles error 99
* @f2: int type
* @buff: char pointer
* @av: char pointer
* description: error message
*/

void writeError(int f2, char *buff, char *av)
{
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
		free(buff);
		exit(99);
	}
}


/**
* closeError - handle error 100
* @f2: int type
* @buff: char pointer
* description: error message
*/

void closeError(int f2, char *buff)
{
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2);
		free(buff);
		exit(100);
	}
}
