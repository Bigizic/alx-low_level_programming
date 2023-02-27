#include "main.h"
#include <stdio.h>
/*header*/

/**
* _atoi - convert a string to an integer ..
* @s: char type ..
* Return: 0 if success ..
*/

int _atoi(char *s)
{
int n, i, m;

m = 1;
i = n = 0;
while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
{
if (s[i] == '-')
m = m * -1;
i++;
}
while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
{
if (n >= 0)
{
n = n * 10 - (s[i] - '0');
i++;
}
else
{
n = n * 10 - (s[i] - '0');
i++;
}
}
m = m * -1;
return (n * m);
}
