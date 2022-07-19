#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of list
 * @head: a pointer to pointer for the head element
 * @n: integer variable of new node
 * Return: NULL if function fails or address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		for (last = *head; last->next != NULL; last = last->next)
			;
		last->next = new_node;
	}

	return (*head);
}
