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
	size_t i = 0;
	ssize_t print;

	if (filename == NULL )
	{
		return (-1);
	}
	
	if (ptrfile == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;

			print = fwrite(text_content, sizeof(char), i, ptrfile);
			if (print != i)
			{
				fclose(ptrfile);
				return (-1);
			}
		}
	}
		fclose(ptrfile);
		return (1);
}
