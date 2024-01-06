#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Returns: pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size == NULL)
		return (NULL);

	/* Allocate memory for the hasg table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers to hash nodes */
	new_table->ptr_array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->ptr_array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	/* initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_table->ptr_array[i] = NULL;

	return (new_table);
} 
