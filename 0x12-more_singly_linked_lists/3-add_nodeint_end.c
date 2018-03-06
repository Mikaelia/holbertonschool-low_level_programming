#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * add_nodeint_end - adds a node to the end of a list
  * @head: address to head of list
  * @n: list data
  *
  * Return: the address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *find;

	if (head == NULL)
		return NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		find = *head;
		while (find->next != NULL)
			find = find->next;
		find->next = new;
	}
	new->n = n;
	new->next = NULL;
	return (new);
}
