#include "hash_tables.h"
/**
  * hash_table_get - function that gets an element from the hash table
  * @ht: hash table to look into
  * @key: key that you are looking for
  *
  * Return: value associated with the element, or NULL if key not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int long i;
	hash_node_t *head;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	head = ht->array[i];

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
