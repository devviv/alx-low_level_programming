/**
* _strncpy - copy n characters of a string to another
*@dest: string
*@src: string
*@n: value
* Return: Always 0.
*/
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
int i, Len;
i = 0;
while (*(dest + i) != '\0')
{
i++;
}
Len = i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
dest[Len + 1] = '\0';
return (dest);
}
