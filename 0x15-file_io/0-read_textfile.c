#include "main.h"
/* header */

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: const char
* @letters: size_t type
* Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr = fopen(filename, 'r');
	char buffer[letters];
	size_t read;
	ssize_t print;

	if (filename == NULL || fptr = NULL)
	{
		return (0);
	}

	read = fread(buffer, sizeof(char), letters, fptr);
	print = write(STDOUT_FILENO, buffer, read);

	if (print == NULL || print != read)
	{
		return (0);
	}
	fclose(fptr);
	return (read);
}
