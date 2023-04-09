#include "main.h"
/* header */

/**
* get_bit -  returns the value of a bit at a given index
*
* @n: unsigned long int
*
* @index: unsigned int
*
* Description: this function returns the value of a bit at
* a given index or it returns -1 if an error occurred
*
* Return: value of the bit at given indec or -1 if not
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	while (n > 0)
	{
		if (index > 0 && n > 0)
		{
			return (1);
		}
		if (index == 0 && n > 0)
		{
			return (0);
		}
		
		i++;
	}
	return (-1);
}
