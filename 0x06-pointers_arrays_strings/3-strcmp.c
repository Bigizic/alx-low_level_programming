#include "main.h"
#include <stdio.h>
/*header*/

/**
* _strcmp - compares two strings ..
* @s1: char type ..
* @s2: char type ..
* Return: void ..
*/

int _strcmp(char *s1, char *s2)
{
int i;
int cd;

for (i = 0; s1[i] != '\0'; i++)
{
}
for (cd = 0; s2[cd] != '\0'; cd++)
{
}

i = i+2;
cd = cd+2;

if (s1 < s2)
return (-i + (-cd));
else if (s2 < s1)
return (i + cd);
else
return (0);
}
