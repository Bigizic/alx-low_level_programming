#include "main.h"
#include <string.h>
/*header*/

/**
* *_strstr - locates a substring ..
* @haystick: char type ..
* @needle: char type ..
* Return: 0 if success..
*/

char *_strstr(char *haystack, char *needle)
{

int i;
int j;
int l;

for (i = 0; haystack[i] != '\0'; i++)
{
for (l = i, j = 0; needle[j] != '\0'; j++, l++)
{
if (needle[j] != haystack[l] || haystack[l] == '\0')
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (0);
}
