#include "main.h"
/**
 * more_numbers - this program prints numbers
 *
 *
 *
 *
 * Return: num
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
}
putchar('\n');
}
}
