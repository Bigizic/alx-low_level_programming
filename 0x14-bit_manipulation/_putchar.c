#include <unistd.h>
/* header */

/**
* _putchar - puts char
* @c: char type
* Return: char
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
