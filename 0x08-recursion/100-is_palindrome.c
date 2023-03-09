#include "main.h"
#include <stdio.h>
/*header*/

/**
* palin - return length of a string ..
* @s: char type ..
* Return: 0 if success ..
*/

int palin(char *s)
{
int i = 0;
if (*s == '\0')
{
return (0);
}
else
{
i = palin(s +1);
i++;
}
return (i);
}

/** scanner - scans string ..
* @c: char type ..
* @d: char rtpe ..
* Return: 0 if success ..
*/
int scanner(char *c, char *d)
{
if (*c != *d)
{
return (0);
}
else if ( c >= d)
{
return (1);
}
else
{
return (scanner(c + 1, d - 1));
}
}


/**
* is_palindrome - returns 1 if a string is a palindrome else 0 ..
* @s: char type ..
* Return: 0 if success ..
*/

int is_palindrome(char *s)
{
int i = palin(s);
char *c = s;
char *d = s + (i - 1);
if (i == 0)
{
return (1);
}
return (scanner(c, d));
}
