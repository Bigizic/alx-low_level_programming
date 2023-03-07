#include "main.h"
#include <string.h>
/*header*/

/**
* _strspn - gets the length of a prefix substring ..
* @s: char type ..
* @accept: char tpye ..
* Return: 0 if success ..
*/

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int l = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
l++;
break;
}
}
if (accept[j] == '\0')
return (l);
}
return (l);
}
