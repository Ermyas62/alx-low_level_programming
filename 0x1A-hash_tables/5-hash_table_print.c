#include "hash_tables.h"

/**
 * hash_table_print - print the key and values of the hash table
 * @ht: pointer to the hash table
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int array_index;
	int is_first, is_first_hash;
	hash_node_t *current_node;

	if (ht == NULL)
		return;
	printf("{}");
	is_first_hash = 1;
	for (array_index = 0; array_index < ht->size; array_index++)
	{
		if ((ht->array)[array_index] == NULL)
			continue;
		if (!is_first_hash)
			printf(", ");
		current_node = (ht->array)[array_index];
		is_first = 1;
		while (current_node)
		{
			if (!is_first)
				printf(", ");
			printf("\'%s\':\'%s\'", current_node->key,
					current_node->value);
			is_first = 0;
			current_node = current_node->next;
		}
		current_node = NULL;
		is_first_hash = 0;
	}
	printf("}\n");
}

