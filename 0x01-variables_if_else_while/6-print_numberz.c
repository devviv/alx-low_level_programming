/**
 *main-is the entry
 *
 *Return: it will return zero if there is any troubles
*/#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
