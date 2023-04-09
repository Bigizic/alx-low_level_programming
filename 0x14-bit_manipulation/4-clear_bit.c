#include "main.h"
/* header */

/**
* clear_bit - set the value of a bit to 0 at a given index
*
* @n: pointer to an unsigned long int
*
* @index: unsigned int
*
* Description: this function set the value of a bit to 0
* at a given index with the & and ~ operator it uses the
* << (bit shifting) operator to shift the bits of the left
* hand operator to the left by a number of positions.
*
* Return: 1 if success or -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
