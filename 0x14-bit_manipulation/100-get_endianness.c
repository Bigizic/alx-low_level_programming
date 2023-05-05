#include "main.h"
/* header */


/**
* get_endianness - check the endianness
*
* Description: gets endianness
*
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	size_t x = 1;
	char *p = (char *) &x;

	if (*p)
		return (1);

	else
		return (0);
}
