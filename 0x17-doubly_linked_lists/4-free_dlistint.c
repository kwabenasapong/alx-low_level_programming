#include "lists.h"


/**
 * free_dlistint - function that frees
 * a dlistint_t list
 *
 * @head: node pointer to dlistint_t
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
}
