#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes a head of a list
 *@head : the list
 *Return: the data of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL)
	{
		return (0);
	}

	if ((*head)->next == NULL)
	{
		data = (*head)->n;
		free(head);
	}
	else
	{
		data = (*head)->n;

		(*head) = (*head)->next;

		while (head)
		{
			temp = (*head)->next;
		}
		free(head);
		(*head) = temp;
		(*head)->next = NULL;
	}
	return (data);
}
