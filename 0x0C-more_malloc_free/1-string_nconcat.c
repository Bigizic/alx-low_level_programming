#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*header*/

/**
* *string_nconcat - concatenates two strings.
* @s1: char type ..
* @s2: char type ..
* @n: int type ..
* Return: 0 if success ..
*/

/**
* unsigned int ls1 = strlen(s1);
* unsigned int ls2 = strlen(s2);
* char *p;
* if (s1 == NULL || s2 == NULL)
* {
* s1 = "";
* s2 = "";
* }
* if (n >= ls2)
* {
* n = ls2;
* }
* p = (char *)malloc((ls1 + n + 1) * sizeof(char));
* if (p == NULL)
* {
* return (NULL);
* }
* memcpy(p, s1, ls1);
* memcpy(p + ls1, s2, n);
* p[ls1 + n] = '\0';
* return (p);
* }
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j;
unsigned int k;
char *p;
i = 0;
j = 0;
k = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
i += 1;
p = malloc(i + n + 1);
if (p == NULL)
{
return (NULL);
}
while (s1[j])
{
p[j] = s1[j];
j += 1;
}
while (k < n)
{
p[j + k] = s2[k];
k += 1;
}
p[j + k] = '\0';
return (p);
}

