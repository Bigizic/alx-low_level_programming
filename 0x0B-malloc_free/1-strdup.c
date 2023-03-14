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
char *p;
int i = 0, j =0;
i += 1;
p = malloc(sizeof(char) * i + 1);

if (str == NULL)
{
return (NULL);
}

while (*str)
{
p[j] = *str;
str++;
j += 1;
}
p[j] = *str;
if (p == NULL)
{
return (NULL);
}

return (p);

}
