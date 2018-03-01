#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * list_len - prints number of elements in list
  * @h: pointer to node element
  *
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
