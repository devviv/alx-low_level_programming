#include <stdlib.h>
#include <stdio.h>
#include "list.h"
/**
* add_node_end - add a node at the end of a list
*@head : the list
*@str : the element to be add
*Return: the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t **help;

	help = malloc(sizeof(list_t));
	(*help)->str = (char *)str;
	(*help)->next = NULL;

	if (*help == NULL)
	{
		return (*help);
	}
	else
	{
		list_t **temp;

		temp = head;
		while ((*head)->next != NULL)
		{
			(*temp)->next;
		}
		(*temp)->next = (*help);
	}
	return (*head);
}
