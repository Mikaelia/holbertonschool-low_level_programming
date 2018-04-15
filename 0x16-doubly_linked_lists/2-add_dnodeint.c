#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  * @head: pointer to head of list
  * @n: value of node data
  * Return: Always EXIT_SUCCESS.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
}
