#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index - insert a node at given position
*@head : the list
*@idx : the position
*@n : the node's data
*Return: the node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;

	unsigned int i = 0;

	for (i = 0; i < (idx - 1); i++)
	{
		*head = (*head)->next;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
	}
	(*head)->n = n;

	(*head)->next = temp;
	return (*head);
}
