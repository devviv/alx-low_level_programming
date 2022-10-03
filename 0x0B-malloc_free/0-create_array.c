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
i = 0;
ar = malloc(size * sizeof(char));
if ( size > 0)
{
if (ar != NULL)
{
while (i < size)
{
ar[i] = c;
i++;
}
return (ar);
}
}
else
{
return (NULL);
}
}
