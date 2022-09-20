/**
 * puts2 - prints characters
 *@str: string
 * Return: nothing
 */
#include "main.h"
void puts2(char *str)
{
int i, j, len;
i = 0;
while (*(str + i) != '\0')
{
i++;
}
len = i;
for (j = 0 ; j < len; j += 2)
{
_putchar(*(str + j));
}
_putchar('\n');
}
