#include "main.h"
#include <stdio.h>
/*headers*/

/**
* *string_toupper - changes all lowercase letters of a string to uppercase ..
* @ *: char type ..
* Return: 0 if success ..
*/

char *string_toupper(char *str)
{
int i;

for (i = 0; *[i] != '\0'; i++)
{
if (*[i] >= 'a' && *[i] <= 'z')
{
*[i] = *[i] - 32;
}
}
return (*);
}
