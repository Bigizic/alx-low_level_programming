#include "main.h"
#include <string.h>
/*header*/

/**
* *_memcpy - copies memory area ..
* @dest: char type ..
* @src: char type..
* @n: int type ..
* Return: 0 if success .
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
