#include "main.h"
#include <string.h>
/*header*/

/**
* *_strpbrk - searches for any of a set of bytes ..
* @s: char type ..
* @accept: char type ..
* Return: 0 if success .
*/

char *_strpbrk(char *s, char *accept)
{
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return (0);
}
