#include "lists.h"


/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 *
 * @head: head pointer to dlistint_t
 * @n: dlistint int variable
 * Return: the address of the new element of NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;

	if ((*head) == NULL)
	{
		(*head) = newnode;
		return (*head);
	}

	temp = (*head);
	while (temp->next != NULL)
		temp = temp->next;

	newnode->prev = temp;
	temp->next = newnode;
	return (temp);
}
