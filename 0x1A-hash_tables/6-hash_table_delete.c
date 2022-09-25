#include "hash_tables.h"

/**
 * free_list - Frees a list.
 * @head: A pointer to the list.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->value);
		free(head->key);
		free(head);
		head = tmp;
	}
}

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
