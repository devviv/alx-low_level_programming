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
putchar(i + '0');
putchar(j + '0');
putchar(':');
putchar(k + '0');
putchar(l + '0');
putchar('\n');
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
putchar(i + '0');
putchar(j + '0');
putchar(':');
putchar(k + '0');
putchar(l + '0');
putchar('\n');
}
}
}
}
}
}
