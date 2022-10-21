#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/**
* add_node - add a node at the beginning of a list
*@head : the list
*@str : the element to be add
*Return: the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t **help;

	help = malloc(sizeof(list_t));
	(*help)->str = (char *)str;

	if (*help == NULL)
	{
		(*help)->next = NULL;
	}
	else
	{
		(*help)->next = (*head);
	}
	return (*head);
}
