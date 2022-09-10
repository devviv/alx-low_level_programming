/**
 *main-is the entry
 *
 *Return: it will return zero if there is any troubles
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
char A[] = "0123456789";
char B[] = "abcdef";
char *p;
char *q;
int i;
p = A;
q = B;
for (i = 0 ; i <= 9; i++)
{
putchar(*p + i);
}
for (i = 0 ; i <= 5 ; i++)
{
putchar(*q + i);
}
putchar('\n');
return (0);
}
