#include "main.h"
#include <stdio.h>
/*header*/

/**
* _strlen - get the length of a string ..
* @s: char type ..
* Return: 1 if success ..
*/

int _strlen(char *s)
{
int cd;
int i = 0;

while (s[i] != '\0')
{
i++;
}
cd = i;
return (1);
}

/**
* puts_half -  prints half of a string ..
* @str: char type ..
* Return: string if success ..
**/

void puts_half(char *str)
{
int i;
int man = _strlen(str);

if (man % 2 != 0)
{
i = (man / 2) + 1;
}
else
{
i = man / 2;
}
for (i = i; i < man; i++)
{
putchar(str[i]);
}
putchar('\n');
}
