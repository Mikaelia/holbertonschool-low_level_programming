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
	dlistint_t *tmp;

	count = 1;
	tmp = *h;

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
		return (new);
	}
	while (tmp != NULL && idx > 0)
	{
		if (count == idx)
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		count++;
		tmp  = tmp->next;
	}
	return (NULL);
}
