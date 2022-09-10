/**
 *main-is the entry
 *
 *Return: it will return zero if there is any troubles
*/
#include <stdio.h>
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
putchar((i % 10) + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
