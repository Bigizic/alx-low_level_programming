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
	unsigned int i;
	int x;

	i = n ^ m;
	x = 0;
	while (i != 0)
	{
		x += i & 1;
		i >>= 1;
	}
	return (x);
}
