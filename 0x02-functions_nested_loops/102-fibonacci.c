#include "main.h"
#include <stdio.h>
/**
 * main - this program prints every minute
 *
 * Return: sum
 */
int main(void)
{
long sum_1, sum_2;
long i;
sum_1 = 1;
printf("%ld, ", sum_1);
sum_2 = sum_1 + sum_1;
printf("%ld, ", sum_2);
for (i = 0; i < 23;)
{
sum_1 += sum_2;
printf("%ld, ", sum_1);
sum_2 += sum_1;
printf("%ld, ", sum_2);
i++;
if (i == 23)
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
