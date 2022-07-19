#include "lists.h"

/**
 * listint_len - that returns the number of
 * elements in a linked listint_t list
 *
 * @h: points to next node in list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		if (h->n == 0 || h->next == NULL)
			i--;
	}
	return (i);
}
