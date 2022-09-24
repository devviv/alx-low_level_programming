/**
* _strncat - append n characters of a string to another
*@dest: string
*@src: string
*@n: value
* Return: nothing
*/
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
int i, Len;
i = 0;
while (*(dest + i) != '\0')
{
i++;
}
Len = i;
i = 0;
while (*(dest + i) != '\0' && i < n)
{
dest[Len + i] = src[i];
i++;
}
dest[Len + i] = '\0';
return (dest);
}
