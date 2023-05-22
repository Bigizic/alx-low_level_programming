#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _islower - Return 1 if letter is lowercase, 0 if not.
* @c: character type letter..
* Return: 1 if lowercase, 0 if not lowercase
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
	{
		return (0);
	}
}

/**
* _isalpha - Check if character is an alphabetic character.
*  @c: type int character
* Return: 1 if letter, lowercase or uppercase, and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
	{
		return (0);
	}
}
/**
* _abs - compute the absolute value of an integer
* @n: int type number
* Return:  value of @n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

/**
* _isupper - checks for uppercase characters...
* @c: contains alphabet a to z in uppercase..
* Return: 1 if c is uppercase otherwise 0 ..
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	{
		return (0);
	}
}

/**
* _isdigit - checks for digits 0 through 9 ..
* @c: stores digit 0 to 9 ..
* Return: 1 if c is a digit otherwise 0 ..
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		return (0);
	}
}

/**
* _strlen - returns the length of a string ..
* @s: char type ..
* Return: length of string if success ..
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{

	}
	return (c);
}

/**
* _puts - prints a string followed by a new line ..
* @str: char type ..
* Return: 0 if success ..
*/
void _puts(char *s)
{

	int i;
	for (i = 0; *(s + i) != '\0'; i++)
		putchar(*(s + i));
	putchar('\n');
}

/**
 * _strcpy - entry point
 * @dest: destiny
 * @src: font
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	j++;
	return (dest);
}

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
	return (n *m);
}

/**
* *_strcat - concatenates two strings ..
* @dest: char type .
* @src: char type ..
* Return: dest if success ..
*/
char *_strcat(char *dest, char *src)
{
	int cd;
	int i;

	for (cd = 0; dest[cd] != '\0'; cd++)
		for (i = 0; src[i] != '\0'; i++)
			dest[cd + i] = src[i];

	return (dest);

}

/**
* *_strncat - concatenates two strings ..
* @dest: char type ..
* @src: char type ..
* @n: int type ..
* Return: dest if success ..
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, cd;

	if (n <= 0)
		return (dest);

	i = 0;
	cd = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (cd < n && src[cd] != '\0')
	{
		dest[i++] = src[cd++];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
* *_strncpy - copies a string ..
* @dest: char type ..
* @src: char type ..
* @n: int type ..
* Return: dest if success ..
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);

}

/**
* _strcmp - compares two strings ..
* @s1: char type ..
* @s2: char type ..
* Return: void ..
*/
int _strcmp(char *s1, char *s2)
{

for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
else if (*s1 == '\0' || *s2 == '\0')
{
break;
}
}
if (*s1 == *s2)
{
return (0);
}
else
return (*s1 - *s2);
}

/**
* *_memset - fills memory with a constant byte ..
* @s: char type ..
* @b: char type ..
* @n: int type ..
* Return: s if succesas ..
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}


/**
* *_memcpy - copies memory area ..
* @dest: char type ..
* @src: char type..
* @n: int type ..
* Return: 0 if success .
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}


/**
*  *_strchr - locates a character in a string ..
*  @s: char type ..
*  @c: char type ..
*  Return: 0 if success ..
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}


/**
* _strspn - strspn function
* @s: char type
* @accept: char type
*
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}

	if (found)
		count++;
	else
		return (count);
	s++;
	}
	return (count);
}


/**
* _strpbrk - strpbrk function
* @s: char type
* @accept: char type
*
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}
	return (NULL);
}


/**
* _strstr - strstr function
* @haystack: char type
* @needle: char type
*
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

	if (*n == '\0')
		return (haystack);

	haystack++;
	}
	return (NULL);
}
