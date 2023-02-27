#include "main.h"
#include <stdio.h>
/*header*/

/**
* rev_string - reverses a string ..
* @s: char type ..
* Return: 0 if success ..
*/

void rev_string(char *s)
{

int i = 0;
int o;
char c;
char d;

while (s[i] != '\0')
{
i++;
}
i--;
for (o = 0; o < i; o++)
{
c = s[o];
d = s[i];
s[o] = d;
s[i] = c;
i--;
}
}
