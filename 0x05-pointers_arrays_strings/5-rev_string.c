/**
* rev_string - reverse a string
*@s: string
* Return: nothing
*/
#include "main.h"

void rev_string(char *s)
{
int i, j, len;
char *ptr;
char new_string[100];
i = 0;
ptr = new_string;
while (*(s  + i) != '\0')
{
i++;
}
len = i;
i = 0;
for (j = (len - 1) ; j >= 0; j--)
{
*(ptr + i) = s[j];
i++;
}
*(ptr + i + 1) = '\0';
for (i = 0; i < len; i++)
{
s[i] = *(ptr + i);
}
s[i + 1] = '\0';
}
