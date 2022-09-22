/**
* leet - encode a string with 1337
*
*@str: string
* Return: str
*/
#include "main.h"
char *leet(char *str)
{
int i, j;

char *string1 = "aAeEoOtTlL";
char *string2 = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == string1[j])
{
str[i] = string2[j];
}
}
}

return (str);
}
