#include "hash_tables.h"
/**
  * hash_table_set - a function that adds an element to the hash table
  * @ht: has table
  * @key: key
  * @value: the value associated with the key
  * Return: 1 if succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head;
	hash_node_t *tmp;
	hash_node_t *new;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];
	tmp = ht->array[idx];

	new = malloc(sizeof(hash_node_t));
	{
		if (new == NULL)
			return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);

	if (head == NULL)
		new->next = NULL;
	else
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				free(new);
				return (1);
			}
			tmp = tmp->next;
		}
		new->next = head;
	}
	head = new;
	return (1);
}
