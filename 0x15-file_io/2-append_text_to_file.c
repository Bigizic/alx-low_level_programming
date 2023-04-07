#include "main.h"
/* header */

/**
* append_text_to_file - append text at the end of file
* @filename: const char
* @text_content: char type
* Return: 0 if success
*/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptrf;
	int exist;
	size_t length = strlen(text_content);
	size_t print;

	if (filename == NULL)
	{
		return (-1);
	}

	exist = access(filename, F_OK);
	if (exist == -1)
	{
		return (-1);
	}
	ptrf = fopen(filename, "a");
	if (ptrf == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fclose(ptrf);
		return (0);
	}

	print = fwrite(text_content, sizeof(char), length, ptrf);
	fclose(ptrf);

	if (print != length)
	{
		return (-1);
	}
	return (1);
}
