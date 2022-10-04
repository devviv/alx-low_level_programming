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
	char *ptr = NULL;
	int i;
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	i = 0;
	if (str != NULL)
	{
		ptr = malloc(len * sizeof(char) + 1);
		while (*(str + i) != '\0')
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
