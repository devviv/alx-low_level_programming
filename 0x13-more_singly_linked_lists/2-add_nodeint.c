#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - add a node at the beginning of a list
*@head : the list
*@n : the element to be add
*Return: the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **help;
	(*help)->n = n;

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
