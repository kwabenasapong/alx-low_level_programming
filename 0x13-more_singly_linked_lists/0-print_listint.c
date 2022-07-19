#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: points to next node in list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		printf("%d\n", h->n);
	}
	return (i);
}
