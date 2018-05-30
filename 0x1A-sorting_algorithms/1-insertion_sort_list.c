#include "sort.h"
#include <stdio.h>
/**
  * insertion_sort_list - sorts list with insertion sort
  * @list: list to be sorted
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *runner;

	if (list == NULL)
		return;

	runner = (*list)->next;
	while (runner)
	{

		while (runner->prev && runner->prev->n > runner->n)
		{
			if (runner->next)
				runner->next->prev = runner->prev;
			runner->prev->next = runner->next;
			runner->next = runner->prev;
			runner->prev = runner->prev->prev;
			runner->next->prev = runner;
			if (!(runner->prev))
				*list = runner;
			else
				runner->prev->next = runner;
			print_list(*list);
		}
		runner = runner->next;
	}
}
