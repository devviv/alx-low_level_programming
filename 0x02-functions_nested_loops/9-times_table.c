#include "main.h"
/**
 * times_table - this programm print the time table of 9
 *
 *
 *
 * Return: num
 */
void times_table(void)
{
int n = 0;
int num;
while (n <= '9')
{
for (num = 0; num <= 9; num++)
{
int x = num * n;
_putchar(x);
_putchar(',');
}
n++;
num = '0';
}
}
