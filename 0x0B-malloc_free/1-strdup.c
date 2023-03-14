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
p = malloc(sizeof(char));

p = strdup(str);

return (p);
free(p);
if (str == NULL)
{
return (NULL);
}
}
