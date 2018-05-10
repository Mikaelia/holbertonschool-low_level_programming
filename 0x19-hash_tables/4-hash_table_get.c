#include "hash_tables.h"
/**
  * hast_table_get - function that gets an element from the hash table
  * ht: hash table to look into
  * key: key that you are looking for
  * Return: the value associated with the element, or NULL if key couldn’t be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned int long i;

	i = key_index((const unsigned char*)key, ht->size);
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
