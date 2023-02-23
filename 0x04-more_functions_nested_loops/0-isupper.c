#include "main.h"
/*header*/
/**
* _isupper - checks for uppercase characters...
* @c: contains alphabet a to z in uppercase..
* Return: 1 if c is uppercase otherwise 0 ..
*/

int _isupper(int c)
{
if (c >= 'A' || c <= 'Z')
return (1);
else
return (0);
}
