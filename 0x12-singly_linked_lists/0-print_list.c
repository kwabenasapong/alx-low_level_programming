#include "lists.h"



/**
 * print_list - function return number of nodes
 * @h: passed list_t type
 * Return: number of nodes
 */
size_t print_list(const list_h *h)
{
	size_t i = 0;

	if (h->str == NULL)
	{
		print("[0] (nil)\n");
	else
	{
		for (h; h != NULL; h = h->next, i++)
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
	}
	return (i);
}
