/**
 *main-is the entry
 *
 *Return: it will return zero if there is any troubles
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
char A[] = "abcdefghijklmnopqrstuvwxyz";
char *p;
int i;
p = A;
for (i = 0 ; i <= 25 ; i++)
{
putchar(*p + i);
}
putchar('\n');
return (0);
}
