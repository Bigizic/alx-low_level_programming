#include "main.h"
/* header */

/**
* binary_to_uint -  converts a binary number to an unsigned int.
*
* @b: const char
*
* Decription: a function that converts a binary number to a positive number
*
* Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int count = 0;
	int l = strlen(b);

	while (b != NULL)
	{
		for (i = l - 1, j = 0; i >= 0; i--, j++)
		{
			if (b[i] == '1' || b[i] == '0')
			{
				count += 1 << (l - i - 1);
			}
			if (b[i] != '1' || b[i] != '0')
			{
				b = NULL;
				return (0);
			}
		}

	}
	return (count);
}
