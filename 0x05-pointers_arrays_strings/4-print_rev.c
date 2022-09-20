/**
 * print_rev - prints string in reverse
 *
 *@s: string
 * Return: nothing
 */
#include "main.h"
void print_rev(char *s)
{
int i = 0;
int j;
while (*(s + i) != '\0')
{
i++;
}
j = i;
for (j = i; j > 0; j--)
{
_putchar(*(s + j));
}
_putchar('\n');
}
