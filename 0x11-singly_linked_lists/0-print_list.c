#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * print_list - prints out all elements of list
  * @h: pointer to node element
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
