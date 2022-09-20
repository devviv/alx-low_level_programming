/**
 * puts_half - prints the half of string
 *@str: string
 * Return: nothing
 */
#include "main.h"
void puts_half(char *str)
{
int i, n;
i = 0;
while (*(str + i) != '\0')
{
i++;
}
n = i;
i = 0;
if (n % 2 == 0)
{
for (i = n / 2; i < n; i++)
{
_putchar(*(str + i));
}
}
else
{
for (i = (n - 1) / 2; i < n; i++)
{
_putchar(*(str + i));
}
}
}

