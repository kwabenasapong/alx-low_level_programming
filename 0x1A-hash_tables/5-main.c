#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "hetairas", "girls");
	hash_table_set(ht, "mentioner", "boys");
	hash_table_set(ht, "heliotropes", "axe");
	hash_table_set(ht, "serafins", "angles");
	hash_table_set(ht, "neurospora", "cut");
	hash_table_set(ht, "joyful", "line");
	hash_table_set(ht, "synaphea", "grit");
	hash_table_set(ht, "vivency", "cow");
	hash_table_set(ht, "depravement", "india");
	hash_table_set(ht, "dram", "goat");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_print(ht);
	hash_table_print(NULL);
	return (EXIT_SUCCESS);
}
