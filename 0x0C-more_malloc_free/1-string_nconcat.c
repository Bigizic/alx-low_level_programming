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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int ls1 = strlen(s1);
unsigned int ls2 = strlen(s2);
char *p;
if (n >= ls2)
{
n = ls2;
}
if (s1 == NULL)
{
n = 0;
}
if (s2 == NULL)
{
n = 0;
}
p = (char *)malloc((ls1 + n + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
memcpy(p, s1, ls1);
memcpy(p + ls1, s2, n);
p[ls1 + n] = '\0';
return (p);

}
