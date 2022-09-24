#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 *
 * Return: 1 on success or 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	element = ht->array[i];
	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->next;
	}
	return (NULL);
}

