#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *@s1: character
 *@s2: character
 *@n: value
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len;
	len = 0;
	while (*s != '\0')
	{
		len++;
	}
	return (len);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *ptr;
	
	i = 0;
	j = 0;
	len1 = calclength(s1);
	len2 = calclength(s2);
	
	if (s1 != NULL && s2 != NULL)
	{
		if (n < len2)
		{
			ptr = malloc((len1 + n) * sizeof(char) + 1);
			for (i = 0; i < len1; i++)
			{
				ptr[i] = s1[i];
			}
			for (j = 0; j < n; j++)
			{
				ptr[i] = s2[j];
			}
			return (ptr);
		}
		
		else
		{
			ptr = malloc((len1 + len2) * sizeof(char) + 1);
			while (s1[i] != '\0')
			{
				ptr[i] = s1[i];
				i++;
			}
			while (s2[j] != '\0')
			{
				ptr[i] = s2[j];
				j++;
				i++;
			}
			return(ptr);
		}
	}
	else if(s1 == NULL && s2 != NULL)
	{
		ptr = malloc((len2) * sizeof(char) + 1);
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
		return (ptr);
	}
	else if(s1 != NULL && s2 == NULL)
	{
		ptr = malloc(len2 * sizeof(char) + 1);
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		return (ptr);
	}
	else
	{
	return (NULL);
	}
	return (NULL);

}
