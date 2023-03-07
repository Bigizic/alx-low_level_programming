#include "main.h"
#include <string.h>
/*header*/

/**
*  *_strchr - locates a character in a string ..
*  @s: char type ..
*  @c: char type ..
*  Return: 0 if success ..
*/


char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
if (s[i] == c)
return (s + i);
else
return ('\0');
}
