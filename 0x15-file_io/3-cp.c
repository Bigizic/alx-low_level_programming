#include "main.h"
/* header */

/**
* checkRead - function for read 2
* @r2: size_t type
* @f1: FILE type
* @fr: char pointer to a pointer
* @f2: int type
* @buff: pointer to a pointer
* Return: 0 if success
*/

int checkRead(size_t *r2, FILE **f1, char **fr, int *f2, char **buff)
{
	if (*r2 == 0 && ferror(*f1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", *fr);
		fclose(*f1);
		close(*f2);
		free(*buff);
		exit(98);
	}
	return (0);
}


/**
* closeFiles - checks for value of file descriptor
* @f1: FILE type
* @fr: char type
* @f2: int type
* @buff: char type to a pointer
* Return: value of file descriptor
*/

int closeFiles(FILE **f1, char **fr, int *f2, char **buff)
{
	int j;
	int i = fclose(*f1);

	if (i == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", *fr);
		close(*f2);
		free(*buff);
		exit(100);
	}

	j = close(*f2);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", *f2);
		free(*buff);
		exit(100);
	}
	return (0);
}



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
	int file2;
	ssize_t print;
	size_t read2;
	char *buffer = malloc(count);

	file1 = fopen(file_from, "r");
	if (file1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		free(buffer);
		exit(98);
	}
	file2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IWGRP | S_IROTH);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		fclose(file1);
		free(buffer);
		exit(99);
	}
	read2 = fread(buffer, sizeof(char), count, file1);
	if (read2 > 0)
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
	checkRead(&read2, &file1, &file_from, &file2, &buffer);
	closeFiles(&file1, &file_from, &file2, &buffer);
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
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	two_files(argv[1], argv[2], 1024);

	return (0);
}
