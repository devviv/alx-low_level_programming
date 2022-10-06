#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *@b: value
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
if (sizeof(b) == sizeof(unsigned int))
{
b = (malloc(sizeof(b)));
}
else
{
putchar(9);
putchar(8);
}
}
