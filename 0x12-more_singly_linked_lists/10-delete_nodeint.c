#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - deletes a node at a given index
  * @head: address to head of list
  * @index: index of the list where the new node should be added
  *
  * Return: 1 if success, -1 if fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;
	listint_t *previous;

	count = 0;
	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while(temp != NULL)
	{
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			(void)previous;
			return (1);
		}
		if (count == index)
		{
			previous->next = temp->next;
			free(temp);
			return (1);
		}

		count++;
		previous = temp;
		temp = temp->next;
	}
	return (-1);
}
