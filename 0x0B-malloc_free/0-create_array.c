#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array
 *@size: value
 *@c: character
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
ar = malloc(size * sizeof(char));
i = 0;
if (size)
{
while (i < size)
{
ar[i] = c;
i++;
}
free(ar);
return (ar);
}
else
{
free(ar);
return (NULL);
}
}
