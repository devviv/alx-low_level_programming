#include "main.h"

/**
 * create_array - create an array
 *@size: value
 *@c: character
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
char *ar;
ar = malloc(size * sizeof(char));
int i;
i = 0;
if (size)
{
while (i < size)
{
ar[i] = c;
i++;
}
return (ar);
}
else
{
return (NULL);
}
}
