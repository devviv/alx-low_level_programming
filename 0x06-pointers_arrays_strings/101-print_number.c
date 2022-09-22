/**
* print_number - prints integers
*
*@n: value
* Return: nothing
*/
#include "main.h"
void print_number(int n)
{
int i, *p;
p = n;
i = 0;
while (*(p + 1) != '\0')
{
_putchar(*(p + 1));
i++;
}
}
