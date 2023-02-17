#include <stdio.h>
/* header */

/**
* main - Determine the alphabets in lower case.
* Return: 0 if success.
(*
*/

int main(void)
{
char c;
char ac;

for (c = 'a'; c <= 'z'; c++)
putchar(c);

for (ac = 'A'; ac <= 'Z'; ac++)
putchar(ac);


putchar ('\n');
return (0);
}
