/**
* rev_string - reverse a string
*@s: string
* Return: nothing
*/
#include "main.h"
void rev_string(char *s)
{
int i, j, len;
i = 0;
char *new_string[100];
while (*(s + i) != '\0')
{
i++;
}
len = i;
i = 0;
for (j = (len - 1) ; j >= 0; j--)
{
new_string[i] = s[j];
i++;
}
new_string[i + 1] = '\0';
for (i = 0; i < len; i++)
{
s[i] = *(new_string + i);
}
s[i + 1] = '\0';
}