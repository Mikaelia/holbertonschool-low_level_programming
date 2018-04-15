#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes node in list
  * @head: head of linked list
  * @index: index of list from which to delete node
  * Return: 1 if success, else -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	temp = *head;

	count = 0;
	if (head == NULL)
		return (-1);
	if (*head  == NULL)
	{
		return (-1);
	}
	if (index == 0 || *head == NULL)
	{
		temp = (*head)->next;
		*head = temp;
		return (1);
	}
	while (temp != NULL)
	{
		if (count == index)
		{
			if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				return(1);
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
