#include "main.h"
/* header */

/**
* set_bit - sets the value of a bit to 1 at a given index
*
* @n: pointer to an unsigned long int
*
* @index: unisgned int
*
* Description: this function gets the value of a bit 
* at a given index and set it's value to 1
*
* Return: 1 or -1 if not
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 64)
	{
		return (-1);
	}


	*n |= (1UL << index);
	return (*n);
}
