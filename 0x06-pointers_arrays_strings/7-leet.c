#include "main.h"
#include <stdio.h>
/*header*/

/**
* *leet - encodes a string into 1337 ..
* @s: char type ..
* Return: 0 if success ..
*/

char *leet(char *s)
{
int i, j;

char ss[] = "a4e3o0t7l1";

i = 0;
j = 0;

while (s[i] != '\0')
{
for (j = 0; j < 10; j += 2)
{
if (s[i] == ss[j] || s[i] == ss[j] - 32)
{
s[i] = ss[j + 1];
break;
}
}
i++;
}
return (s);
}
