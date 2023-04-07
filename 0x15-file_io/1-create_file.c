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
	int ptrfile;
	int i;
	ssize_t print;

	if (filename == NULL)
	{
		return (-1);
	}

	ptrfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ptrfile == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		i = strlen(text_content);
		print = write(ptrfile, text_content, i);

	if (print != i)
	{
		close(ptrfile);
		return (-1);
	}
	}
	close(ptrfile);
	return (1);
}
