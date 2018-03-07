#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
  * sum_listint - gets the sum of the linked list data
  * @head: address to head of list
  *
  * Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	else
	{
		while(head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
