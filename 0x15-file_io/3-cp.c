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
	char *buffer = malloc(count * sizeof(char));

	file1 = fopen(file_from, "r");
	read2 = fread(buffer, sizeof(char), count, file1);
	if (file_from == NULL || read2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	file2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (file_to != NULL)
	{
		print = write(file2, buffer, read2);
		if (file2 == -1 || print != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	i = fclose(file1);
	g = fileno(file1);
	j = close(file2);
	if (i != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", g);
		exit(100);
	}
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file2);
		exit(100);
	}
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
