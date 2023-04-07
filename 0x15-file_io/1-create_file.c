#include "main.h"
/* header */

/**
* create_file - creates a file
* @filename: const char
* @text_content: char pointer
* Return: 1 on success -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	FILE *ptrfile = fopen(filename, "rw");
	int i = strlen(text_content);
	char *buffer = malloc(i * sizeof(char));
	size_t read;
	ssize_t print;

	if (filename == NULL )
	{
		return (-1);
	}
	read = fread(buffer, sizeof(char), i, ptrfile);
	print = write(STDOUT_FILENO, buffer, read);

	fclose(ptrfile);

	if (ptrfile == NULL || (size_t)print < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
