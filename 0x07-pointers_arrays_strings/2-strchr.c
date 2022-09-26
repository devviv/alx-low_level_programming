/**
* _strchr - locates character
* @s: string
* @c: character
*
* Return: the first occurrence of character
*/
#include "main.h"
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
return (0);
}
