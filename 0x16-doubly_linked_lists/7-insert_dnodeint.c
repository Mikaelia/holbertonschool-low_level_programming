#include "lists.h"
/**
  * *insert_dnodeint_at_index - inserts a new node at a given position
  * @h: head node
  * @n: node value
  * @idx: index of the list where the new node should be added
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new;
	dlistint_t *temp;

	temp = *h;
	count = 1;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (*h);
	}
	while (temp != NULL)
	{
		if (count == idx)
		{
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
