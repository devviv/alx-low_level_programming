#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_nodeint_end - add a node at ent of list
*@head : the list
*@n : the element to be added
*Return: the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **element;

	(*element)->n = n;
	(*element)->next = NULL;

	listint_t **help;

	help = head;

	while (help != NULL)
	{
		(*help) = (*help)->next;
	}
	(*help)->next = (*element);

	return (*head);
}
