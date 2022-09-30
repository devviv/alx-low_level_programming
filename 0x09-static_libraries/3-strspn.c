#include "main.h"
/**
 * _strspn - return a length
 *@s: string
 *@accept: string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, len, Len;
unsigned int length;
i = j = 0;
while (*(s + i) != '\0')
{
i++;
}
len = i;
while (*(accept + j) != '\0')
{
j++;
}
Len = j;
i = j = 0;
length = 0;
for (i = 0; i < len; i++)
{
for (j = 0; j < Len; j++)
{
if (*(s + i) == *(accept + j))
{
length++;
}
else
{
continue;
}
}
}
return (length);
}
