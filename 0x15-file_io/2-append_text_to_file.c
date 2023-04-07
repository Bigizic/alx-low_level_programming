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
	int ptrf;
	int length;
	ssize_t print;

	if (filename == NULL)
	{
		return (-1);
	}
		ptrf = open(filename, O_WRONLY | O_APPEND);
		if (ptrf == -1)
		{
			return (-1);
		}
		if (text_content != NULL)
		{
		length = strlen(text_content);
		print = write(ptrf, text_content, length);
		if (print != length)
		{
		close(ptrf);
		return (-1);
		}
		}
	close(ptrf);
	return (1);
}
