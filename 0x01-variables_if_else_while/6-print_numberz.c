/**
 *main-is the entry
 *
 *Return: it will return zero if there is any troubles
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
char A[] = "0123456789";
char *p;
int i;
p = A;
for (i = 0 ; i <= 9 ; i++)
{
putchar(*p + i);
}
putchar('\n');
return (0);
}
