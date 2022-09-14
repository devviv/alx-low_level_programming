#include "main.h"
/**
 * jack_bauer - thi program prints every minute
 *
 * Return: minutes
 */
void jack_bauer(void)
{
int i, j, k, l;
i = j = k = l = 0;
for (i = 0; i < 3; i++)
{
if (i < 2)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
else
{
for (j = 0; j < 4; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
}
