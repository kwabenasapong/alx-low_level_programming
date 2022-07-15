#include "lists.h"



/**
 * print_list - function return number of nodes
 * @h: passed list_t type
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next, i++)
	{	
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
	}
	return (i);
}
