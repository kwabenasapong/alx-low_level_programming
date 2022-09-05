#include "lists.h"


/**
 * dlistint_len - function that returns
 * the number of elements of in a linked dlistint_t list
 *
 * @h: node pointer to dlistint_t
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
