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
for (l = 0; l < n; l++)
{
for (e = 0; e < l; e++)
{
if (n > 0)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
