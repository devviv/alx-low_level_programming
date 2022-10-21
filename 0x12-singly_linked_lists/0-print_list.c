#include <stdio.h>
#include <stdlib.h>
#include "list.h"
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
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)");
			}
			else
			{
				printf("%s", h->str);
				printf("[%d]", h->len);
			}
			h = h->next;
			number++;
		}
	}
	return (number);
}
