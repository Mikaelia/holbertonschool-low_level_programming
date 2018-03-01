#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * *add_node - add nodes to the beginning of list
  * @head: head of list
  * @str: str to copy
  *
  * Return: number of nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
