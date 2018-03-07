#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * listint_len - prints list length
  * @h: header node
  *
  * Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t len;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
