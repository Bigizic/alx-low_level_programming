#include "main.h"
/* header */

/**
* checkRead - function for read 2
* @r2: size_t type
* @f1: FILE type
* @fr: char pointer to a pointer
* @f2: int type
* Return: 0 if success
*/

int checkRead(int *r2, int *f1, char **ffrom, int *f2)
{
	int *i;
	int *j;

	if (r2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *ffrom);
		exit(98);
	}

	i = f1;
	if (close(i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}

	j = f2;
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	exit(EXIT_SUCCESS);

}


/**
* two_files - contains two files and run the program
* @file_from: char pointer to first file
* @file_to: char pointer to second file
* @count: contain 1024 bytes
* Return: a program that read onef and write to twof
*/

int two_files(char *file_from, char *file_to)
{
	int file1, file2, print, read2;
	char buffer[BUFFER];

	file1 = open(file_from, O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	file2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	read2 = read(file1, buffer, BUFFER);
	if (read2 > 0)
	{
		print = write(file2, buffer, read2);
		if (print != read2)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	checkRead(&read2, &file1, &file_from, &file2);
	exit(EXIT_SUCCESS);
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

	two_files(argv[1], argv[2]);

	return (0);
}
