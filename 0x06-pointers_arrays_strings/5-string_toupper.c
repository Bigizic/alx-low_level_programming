#include "main.h"
#include <stdio.h>
/*headers*/

/**
* *string_toupper - changes all lowercase letters of a string to uppercase ..
* @str: char type ..
* Return: 0 if success ..
*/

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
