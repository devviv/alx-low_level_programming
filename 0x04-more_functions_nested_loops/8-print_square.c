#include "main.h"
/**
 * print_square - this program prints square
 *
 *@size: value
 *
 *
 * Return: num
 */
void print_square(int size)
{
int i;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
