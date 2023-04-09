#include "main.h"
/* header */

/**
* flip_bits - return the number of bits you would need to
* filp to get from one number to another
*
* @n: unsigned long int
*
* @m: unsigned long int
*
* Description: this function use the (>>) operator to perform
* the flip
*
* Return: unsigned int type
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, op;

	if (sizeof(n) != 8 || sizeof(m) != 8)
	{
		return (-1);
	}

	if (CHAR_BIT * sizeof(n) != CHAR_BIT * sizeof(m))
	{
		return (-1);
	}

	op = n ^ m;

	for (i = 0; op != 0; i += 1)
	{
		op &= (op -1);
	}
	return (i);
}
