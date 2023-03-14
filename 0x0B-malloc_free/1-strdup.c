#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*header*/

/**
* *_strdup - returns a pointer to a newly allocated space ..
* @str: char type ..
* Return: 0 if success ..
*/

char *_strdup(char *str)
{
int i = 1, j = 0;
char *p;
p = malloc(sizeof(char) * i + 1);

p = strdup(str);

while (*str)
{
p[j] = *str;
str++;
j += 1;
}
if (p == NULL)
{
return (NULL);
}

return (p);

if (str == NULL)
{
return (NULL);
}
}
