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

	i = 0;
	j = 0;
	if (s1 != NULL || s2 != NULL)
	{
		ptr = malloc(sizeof(s1) + sizeof(s2));
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
	return (0);
}
