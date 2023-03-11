#include "main.h"
#include <stdio.h>
/*header*/

/**
* *_strncat - concatenates two strings ..
* @dest: char type ..
* @src: char type ..
* @n: int type ..
* Return: dest if success ..
*/

char *_strncat(char *dest, char *src, int n)
{
int i, cd;

if (n <= 0)
{
return (dest);
}

i = 0;
cd = 0;

while (dest[i] != '\0')
{
i++;
}
while (cd < n && src[cd] != '\0')
{
dest[i++] = src[cd++];
}
dest[i++] = '\0';
return (dest);
}
