#include "hash_tables.h"

/**
 * count_kv_pair - counts the number of key/value pairs in hash table
 * @ht: the hash table
 * @head: key/value pair in array
 * Return: number of key/value pairs
 */
int count_kv_pair(const hash_table_t *ht, hash_node_t *head)
{
	unsigned long int x;
	int count_kv = 0;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			count_kv++;
			head = ht->array[x];
			if (head->next != NULL)
			{
				while (head->next)
				{
					head = head->next;
					count_kv++;
				}
			}
		}
	}
	return (count_kv);
}

/**
 * hash_table_print -  prints a hash table
 * @ht: hash table you print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int count_kv = 0, kv = 0;
	hash_node_t *head = NULL;

	if (ht == NULL)
	{
		printf("{}\n");
	}

	count_kv = count_kv_pair(ht, head);

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			kv++;
			head = ht->array[x];
			if (kv == count_kv)
			{
				printf("'%s': '%s'", head->key, head->value);
				break;
			}

			printf("(%d) '%s': '%s', ", kv, head->key, head->value);
			if (head->next != NULL)
			{
				while (head->next)
				{
					head = head->next;
					kv++;
					if (kv == count_kv)
					{
						printf("'%s': '%s'", head->key, head->value);
						break;
					}
					printf("(%d) '%s': '%s', ", kv, head->key, head->value);
				}
			}
		}
	}
	printf("} (%d)\n", count_kv);
}
