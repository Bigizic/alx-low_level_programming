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
	FILE *fptr = open("filename", O_RDONLY);
	int i;

	if (filename == NULL)
	{
		return (0);
	}

	if (fptr == NULL)
	{
		return (0);
	}

	for (i = 0; i < letters; i++)
	{
		return (i);
	}

	close(fptr);
}
