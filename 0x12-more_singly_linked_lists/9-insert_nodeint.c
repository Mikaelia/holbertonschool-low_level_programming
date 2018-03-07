#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * *insert_nodeint_at_index - inserts node at given index in list
  * @head: address to head of list
  * @idx: index of the list where the new node should be added
  * @n: data for new node
  *
  * Return: address of new node, NULL if fail
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new;
	listint_t *temp;

	count = 0;
	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		if (idx == 0)
		{
			new->next = (*head)->next;
			*head = new;
			new->n = n;
			return (new);
		}

		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			new->n = n;
			return (new);
		}

		count++;
		temp = temp->next;
	}
	return (NULL);
}
