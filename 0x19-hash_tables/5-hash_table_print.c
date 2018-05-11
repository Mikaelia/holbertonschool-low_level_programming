#include "hash_tables.h"
/**
  * hash_table_print - a function that prints a hash table
  * @ht: pointer to the hash table
  *
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag;

	i = 0;
	flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
