#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>


/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/*Helper functions*/
hash_node_t *add_new_node(hash_node_t *head, char *key, char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t *));
	new = NULL;
	new->key = key;
	new->value = value;

	if (head == NULL)
	{
		head = new;
		return (head);
	}

	new->next = head;
	head = new;

	return (head);
}

/*task -0  a function that creates a hash table.*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = malloc(sizeof(hash_node_t) * size);
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}

/*task 1 -a hash function implementing the djb2 algorithm.*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/*task 2*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

/*task 3*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	hash_node_t *element_1, *element_2;

	if (key == NULL || ht == NULL || value == NULL)
	{
		fprintf(stderr, "Error: cannot be empty");
		return (0);
	}

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
	}
	element_2 = malloc(sizeof(hash_node_t));
	if  (element_2 ==NULL)
		return (0);
	element_2->key = strdup(key);
	element_2->value = strdup(value);
	if (element_2->key == NULL || element_2->value == NULL)
		return (0);
	else
	{
		add_new_node(element_2, element_2->key, element_2->value);
	return (1);
	}
}

/*task 4*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *element = NULL;

	if (key == NULL || ht == NULL)
	{
		fprintf(stderr, "Error: cannot be empty");
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);
	element = ht->array[i];
	while(element)
	{
		if (strcmp(element->key, key)== 0)
			return (element->value);
		element = element->next;
	}
	return (NULL);
}


int main()
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	printf("%lu\n", ht->size);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");

	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Bob");
	printf("%s:%s\n", "Bob", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "c");
	printf("%s:%s\n", "c", value);
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value);


	return (EXIT_SUCCESS);
}
