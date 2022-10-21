#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - print a list
*@h : the list
*Return: number of element of list
*/
size_t print_list(const list_t *h)
{
	h = malloc(sizeof(list_t));
	size_t  number;

	number = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u]", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		number++;
	}
	return (number);
}
