#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * pop_listint - a function that removes head node and returns data
  * @head: address to head of list
  *
  * Return: head data
  */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;

	free (*head);

	*head = temp;

	return (num);
}
