#include "main.h"
/**
 * print_triangle - this program prints line
 *
 *
 *@size: character value
 *
 * Return: num
 */
void print_triangle(int size)
{
int l, i, e;
l = i = e = 0;
for (l = 1; l <= size; l++)
{
for (e = size - l; e > 0; e--)
{
_putchar(' ');
}
for (i = 0; i < l; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
