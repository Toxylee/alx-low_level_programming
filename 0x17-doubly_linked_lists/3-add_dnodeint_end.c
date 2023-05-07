#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of doubly linked list
 * @head: the head node
 * @s: the integer data
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int s)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->s = s;
	new->next = NULL;

	/* if linked list is empty */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
