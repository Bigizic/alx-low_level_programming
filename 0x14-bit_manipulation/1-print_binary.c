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
	unsigned long int rep = 0;
	int le = sizeof(unsigned long int) * 8;

	rep = 1UL << (le - 1);

	while (rep > 0)
	{
		if (n & rep)
		{
			write(1, "1", 1);
			i++;
		}
		else if (i > 0)
		{
			write(1, "0", 1);
		}
		rep >>= 1;
	}
	if (i == 0)
	{
		write(1, "0", 1);
	}
}
