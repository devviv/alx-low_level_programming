#include "main.h"
/**
 * times_table - this programm print the time table of 9
 *
 * @k: character value
 *
 * Return : k
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
return (k);
putchar(',');
putchar(' ');
}
putchar('\n');
}
}
