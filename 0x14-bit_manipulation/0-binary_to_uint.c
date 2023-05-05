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
	int i = 0;
	unsigned int count = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		count <<= 1;
		count += b[i] - '0';
		i++;
	}
	return (count);
}
