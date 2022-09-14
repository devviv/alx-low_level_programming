#include "main.h"
#include <stdio.h>
/**
 * main - is the entry
 *
 * Return: sum
 */
int main(void)
{
long int sum_1, sum_2;
long int i;
sum_1 = 1;
printf("%ld, ", sum_1);
sum_2 = sum_1 + sum_1;
printf("%ld, ", sum_2);
for (i = 0; i < 47;)
{
sum_1 += sum_2;
printf("%ld, ", sum_1);
sum_2 += sum_1;
printf("%ld, ", sum_2);
i++;
if (i == 47)
{
sum_1 += sum_2;
printf("%ld, ", sum_1);
sum_2 += sum_1;
printf("%ld", sum_2);
}
}
printf("\n \a");
return (0);
}
