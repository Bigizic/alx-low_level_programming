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
	FILE *ptrfile = fopen(filename, "w");
	size_t i = strlen(text_content);
	size_t print;

	if (filename == NULL || ptrfile == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fclose(ptrfile);
	}

	print = fwrite(text_content, sizeof(char), i, ptrfile);

	if ((size_t)print < i)
	{
		fclose(ptrfile);
		return (-1);
	}
	fclose(ptrfile);
	return (1);
}
