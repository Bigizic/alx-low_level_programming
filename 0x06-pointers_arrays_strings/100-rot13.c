#include "main.h"
#include <stdio.h>
/*header*/

/**
* *rot13 - encodes a string using rot 13 ..
* @s: char type..
* Return: 0 if success ..
*/

char *rot13(char *s)
{
int i, j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
}
return (s);

}
