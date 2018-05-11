#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *tmp;
	unsigned int long i;

	i = 0;
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			tmp = head;
			free(head->key);
			free(head->value);
			head = head->next;
			free(tmp);
		}
		i++;
	}
	free (ht->array);
	free (ht);
}
