#include "main.h"
#include <stdio.h>
/*header*/

/**
* _strlen - prints half of a string ..
* @s: char type .
* Return: 0 if success ..
*/

int _strlen(char *s)
{
int w, i =0;

while (s[i] != '\0')
{
i++;
}
w = i;
return (1);
}

/**
* puts_half -  prints half of a string
* @str: a pointer to string
* Return: string
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
