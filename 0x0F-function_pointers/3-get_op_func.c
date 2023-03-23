#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/*header*/

/**
* *get_op_func -  selects the correct function to perform ..
* the operation asked by the user ..
* @s: char type ..
* Return: 0 if success ..
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
