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
	int del;
	int exist = access(filename, F_OK);
	size_t length = strlen(text_content);
	size_t print;
	size_t *i = NULL;

	if (filename == NULL)
	{
		return (-1);
	}

	if (exist == 0)
	{
		ptrf = fopen(filename, "w");
		del = chmod(filename, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |     S_IROTH);
		return (1);
	}
	if (exist == -1)
	{
		ptrf = NULL;
		return (-1);
	}
	if (ptrf == NULL)
	{
		return (-1);
	}

	print = fwrite(text_content, sizeof(char), length, ptrf);

	if (text_content == NULL)
	{
		(size_t)print = i;
		fclose(ptrf);
	}
	fclose(ptrf);
}
