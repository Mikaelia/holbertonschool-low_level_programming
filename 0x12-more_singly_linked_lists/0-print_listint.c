#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * print_listint - prints all elements of a list
  * @h: header node
  *
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count;
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	printf("%d\n", h->n);
	count++;
	return (count);
}
