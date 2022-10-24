#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_listint - print a list
*@h : the list
*Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t number;

	number = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
