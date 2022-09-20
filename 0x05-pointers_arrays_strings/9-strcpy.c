/**
 *_strcpy - copy a string
 *@src: string
 *@dest:string
 * Return: dest
 */
#include "main.h"
char *_strcpy(char *dest, char *src)
{
int i, j, len;
i = 0;
while (*(src  + i) != '\0')
{
i++;
}
len = i;
i = 0;
for (j = 0 ; j < len; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
