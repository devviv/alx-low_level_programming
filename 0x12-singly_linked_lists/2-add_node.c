#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_node - add a node at the beginning of a list
*@head : the list
*@str : the element to be add
*Return: the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;
	char *str_dup;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	str_dup = strdup(str);

	if (str_dup == NULL)
	{
		free(str_dup);
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	node->str = str_dup;
	node->len = len;
	node->next = *head;

	*head = node;
	return (node);
}
