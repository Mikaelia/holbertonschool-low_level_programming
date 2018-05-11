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
	hash_node_t *new;

	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];

	new = malloc(sizeof(hash_node_t));
	{
		if (new == NULL)
			return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);

	if (head == NULL)
	{
		new->next = NULL;
		ht->array[idx] = new;
		return (1);
	}
	else
	{
		new->next = head;
		ht->array[idx] = new;
		return (1);
	}
	return (0);

}
