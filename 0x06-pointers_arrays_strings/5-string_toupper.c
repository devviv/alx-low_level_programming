/**
* string_toupper - upper string
*
*@str: string
* Return: str
*/
#include "main.h"
char *string_toupper(char *str)
{
int i;
i = 0;
for (i = 0; str[i] != '\0'; i++)
{
while (*(str + i) >= 'a' && *(str + i) <= 'z')
{
str[i] = (str[i] - 32);
}
}
return (str);
}
