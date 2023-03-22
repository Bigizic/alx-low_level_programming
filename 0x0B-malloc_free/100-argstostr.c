#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*header*/

/**
* *argstostr -  concatenates all the arguments of your program ..
* @ac: int type ..
* @av: char type ..
* Return: 0 if success ..
*/

char *argstostr(int ac, char **av)
{
int i;
int di;
char *r;
char *m;
char *p;
di = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
r = av[i];
while (*r != '\0')
{
di++;
r++;
}
di++;
}
m = malloc(di + 1);
if (m == NULL)
{
return (NULL);
}
p = m;
for (i = 0; i < ac; i++)
{
r = av[i];
while (*r != '\0')
{
*p = *r;
p++;
r++;
}
*p = '\n';
p++;
}
*p = '\0';
return (m);
}
