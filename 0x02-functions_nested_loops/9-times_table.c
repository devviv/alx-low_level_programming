#include "main.h"
/**
 * print_last_digit - this program prints last digit of a number
 *
 * @num: character value
 *
 * Return: num
 */
int main(void)
{
times_table();
return (0);
}
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(i * j);
}
_putchar('\n');
}
}
