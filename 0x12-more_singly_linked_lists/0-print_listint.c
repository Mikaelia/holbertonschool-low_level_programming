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

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
