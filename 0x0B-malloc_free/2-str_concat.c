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
int i;
int j;
int k;

i = 0;
j = 0;
k = 0;

if (!s1)
s1 = "";
if (!s2)
s2 = "";
while (s1[i])
i += 1;
while (s2[j])
j += 1;
r = malloc((i + j) * sizeof(char) + 1);
if (r == NULL)
return (NULL);

while (*s1)
{
r[k] = *s1++;
k += 1;
}
while (*s2)
{
r[k] = *s2++;
k += 1;
}
return (r);
}
