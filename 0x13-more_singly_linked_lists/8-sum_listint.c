#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_listint - find the sum list's element
*@head : the list
*Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum;

	 sum = 0;
	while (head)
	{
		sum += head->n;
		head->next;
	}

	return (sum);
}
