#include "main.h"
#include <stdio.h>
/*header*/

/**
* *_strcat - concatenates two strings ..
* @dest: char type .
* @src: char type ..
* Return: dest if success ..
*/

char *_strcat(char *dest, char *src)
{

int cd;
int i;

for (cd = 0; dest[cd] != '\0'; cd++)
{
}
for (i = 0; src[i] != '\0'; i++)
{
dest[cd + i] = src[i];
}
return (dest);

}
