#include "main.h"
/**
 * print_sign - this program prints the sign of the character
 *
 * @n: character value
 *
 * Return: 0
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
