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
for (j = i; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
