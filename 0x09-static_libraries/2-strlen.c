/**
 * _strlen - return à length of string
 *@s: string
 * Return: i
 */
#include "main.h"
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
