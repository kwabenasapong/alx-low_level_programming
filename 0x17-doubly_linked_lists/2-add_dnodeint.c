#include "lists.h"


/**
 * add_dnodeint - function that adds a new node
 * at the begining of a dlistint_t list
 *
 * @head: head pointer to dlistint_t
 * @n: dlistint int variable
 * Return: the address of the new element of NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if ((*head) == NULL)
	{
		(*head) = newnode;
		return (*head);
	}

	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;

	newnode->next = (*head);
	(*head)->prev = newnode;
	(*head) = newnode;
	return (*head);
}
