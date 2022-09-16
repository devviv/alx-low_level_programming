#include "main.h"
/**
 * print_line - this program prints line
 *
 *@n: character value
 *
 *
 * Return: num
 */
void print_line(int n)
{
int l, e;
if (n > 0)
{
for (l = 1; l <= n; l++)
{
for (e = 0; e < l; e++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
