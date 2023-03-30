#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/*header*/

/**
* condition - if statements that handles conditions
* @argc: int type
* @argv: char type
* @i: int type
* @j: int type
* Return: 0 if success
*/

void condition(int argc, char *argv[], int i, int j)
{
	unsigned long int y, u;
	const char e[] = "Error";

	if (argc != 3)
	{
		for (y = 0; y < sizeof(e) / sizeof(e[0]); y++)
		{
			putchar(e[y]);
		}
		putchar('\n');
		exit(98);
	}
	if (!isdigit(*argv[i]) || !isdigit(*argv[j]))
	{
		for (u = 0; u < sizeof(e) / sizeof(e[0]); u++)
		{
			putchar(e[u]);
		}
		putchar('\n');
		exit(98);
	}
}

/**
* print_number - prints the value of a number
* @mul: int type
* @numD: int type
* Return: 0 if success
*/

void print_number(int mul, int numD)
{
	int k, h;
	char output[MAX_DIGITS];

	for (k = numD - 1; k >= 0; k--)
	{
		output[k] = '0' + (mul % 10);
		mul = mul / 10;
	}
	for (h = 0; h < numD; h++)
	{
		putchar(output[h]);
	}
	putchar('\n');
}

/**
* main - multiplies two numbers..
* @argc: int type..
* @argv: char type..
* Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int i = 1, j = 2, mul, numD = 0, temp;
	unsigned long int q;
	char e[] = "Error";
	int num1 = atoi(argv[i]), num2 = atoi(argv[j]);

	mul = num1 * num2;
	if (mul == 0)
	{
		putchar('0');
	}
	else
	{
		if (mul < 0)
		{
			putchar ('-');
			mul = -mul;
		}

	temp = mul;
	while (temp > 0)
	{
		temp = temp / 10;
		numD++;
	}
	if (numD > MAX_DIGITS)
	{
		for (q = 0; q < sizeof(e) / sizeof(e[q]); q++)
		{
			putchar(e[q]);
		}
		putchar('\n');
		exit(98);
	}
	}
	condition(argc, argv, i, j);
	print_number(mul, numD);
	return (0);
}
