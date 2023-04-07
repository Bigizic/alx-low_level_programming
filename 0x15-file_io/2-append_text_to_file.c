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
	FILE *ptrf = fopen(filename, "w");
	size_t length = strlen(text_content);
	size_t print;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fclose(ptrf);
		if (ptrf != NULL)
		{
			return (1);
		}
		if (ptrf == NULL)
		{
			return (-1);
		}
	}
	print = fwrite(text_content, sizeof(char), length, ptrf);
	if ((size_t)print < length)
	{
		fclose(ptrf);
		return (-1);
	}
	fclose(ptrf);
	return (1);
}

