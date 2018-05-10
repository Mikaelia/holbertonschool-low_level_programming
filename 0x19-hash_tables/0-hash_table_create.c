#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *new;
	hash_node_t  **array;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;

	array = malloc(sizeof(char *) * size);
	if (array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->array = array;
	return new;
}
