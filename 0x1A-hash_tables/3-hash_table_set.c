#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *element_1, *element_2;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	element_1 = ht->array[i];

	while (element_1)
	{
		if (strcmp(element_1->key, key) == 0)
		{
			free(element_1->value);
			element_1->value = strdup(value);
			if (element_1->value == NULL)
				return (0);
			return (1);
		}
		element_1 = element_1->next;
	}
	element_2 = malloc(sizeof(hash_node_t));
	if (element_2 == NULL)
		return (0);

	element_2->key = strdup(key);
	element_2->value = strdup(value);

	if (element_1->key == NULL || element_2->value == NULL)
		return (0);
	element_2->next = ht->array[i];
	ht->array[i] = element_2;
	return (1);
}

