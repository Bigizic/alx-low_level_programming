#include "main.h"
/* header */

/**
* two_files - contains two files and run the program
* @file_from: char pointer to first file
* @file_to: char pointer to second file
* @count: contain 1024 bytes
* Return: a program that read onef and write to twof
*/

int two_files(char *file_from, char *file_to, size_t count)
{
	FILE *file1;
	int file2, i, g, j;
	ssize_t print;
	size_t read2;
	char *buffer = malloc(count);

	if (buffer == NULL)
		return (-1);

	file1 = fopen(file_from, "r");
	if (file1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		free(buffer);
		exit(98);
	}
	file2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		fclose(file1);
		free(buffer);
		exit(99);
	}
	read2 = fread(buffer, sizeof(char), count, file1);
	while (read2 > 0)
	{
		print = write(file2, buffer, read2);
		if (print == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			fclose(file1);
			close(file2);
			free(buffer);
			exit(99);
		}
	}

	if (read2 == 0 && ferror(file1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		fclose(file1);
		close(file2);
		free(buffer);
		exit(98);
	}
	i = fclose(file1);
	if (i == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", file_from);
		close(file2);
		free(buffer);
		exit(100);
	}
	j = close(file2);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file2);
		free(buffer);
		exit(100);
	}
	free(buffer);
	return (0);
}




/**
* main - contain filenames and their length
* @argc: int type
* @argv: char type
* Return: copied file
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	two_files(argv[1], argv[2], 1024);

	return (0);
}
