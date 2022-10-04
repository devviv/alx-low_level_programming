#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 *@str: string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	i = 0;
	if (str != NULL)
	{
		ptr = malloc(sizeof(str));
		while (*(str + i) != '\0')
		{
			ptr[i] = str[i];
			i++;
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
