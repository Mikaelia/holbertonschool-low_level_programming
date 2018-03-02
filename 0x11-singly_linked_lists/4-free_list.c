#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * free_list - frees a list
  * @head: head of list
  *
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *new;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
	free(head->str);
	free(head);
}
