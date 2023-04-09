#include "main.h"
/* header */

/**
* print_binary - prints the binary representation of a number
*
* @n: unsigned long int
*
* Description: this function converts a positive number to binary
* Return: void
*/

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned int rep;

	rep = 1U << (sizeof(unsigned int) * 2);

	while (rep != 0)
	{
		if (n & rep)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		rep >>= 1;
		i++;
	}
}
