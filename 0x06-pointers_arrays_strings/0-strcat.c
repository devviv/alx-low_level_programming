/**
* _strcat - append a string to another
*@dest: string
*@src: string
* Return: Always 0.
*/
#include "main.h"
char *_strcat(char *dest, char *src)
{
int i, j, len, Len;
i = j = 0;
while (*(src + i) != '\0')
{
i++;
}
len = i;
while (*(dest + j) != '\0')
{
j++;
}
Len = j;
for (i = 0; i < len; i++)
{
dest[Len + i] = src[i];
}
dest[Len + i] = '\0';
return (dest);
}

