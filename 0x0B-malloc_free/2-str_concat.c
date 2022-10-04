#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *@s1: string
 *@s2: string
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
char *ptr;
int i;
int j;
int len1;
int len2;
len1 = 0;
len2 = 0;
i = 0;
j = 0;
while (*(s2 + len2) != '\0')
{
len2++;
}
while (*(s1 + len1) != '\0')
{
len1++;
}
if (s1 != NULL || s2 != NULL)
{
ptr = malloc(((len1 + len2) *sizeof(char)) + 1);
while (*(s1 + i) != '\0')
{
ptr[i] = s1[i];
i++;
}
while (*(s2 + j) != '\0')
{
ptr[i] = s2[j];
i++;
j++;
}
ptr[i] = '\0';
return (ptr);
}
else
{
return (NULL);
}
return (NULL);
}
