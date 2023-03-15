#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*header*/

/**
* *str_concat - concatenates two strings ..
* @s1: char type ..
* @s2: char type ..
* Return: 0 if success ..
*/

char *str_concat(char *s1, char *s2)
{
char *r;
r = malloc(sizeof(char) + 1);
strcpy(r, s1);
strcat(r, s2);
return (r);

if (r == NULL)
{
return (" ");
}
else
{
return (NULL);
}
}
