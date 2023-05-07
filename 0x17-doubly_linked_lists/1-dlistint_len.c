#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a double linked list
 * @t: the head node
 *
 * Return: the number of elements in a double linked list
 */
size_t dlistint_len(const dlistint_t *t)
{
	size_t counter = 0;

	if (t == NULL)
		return (0);

	while (t != NULL)
	{
		counter++;
		t = t->next;
	}
	return (counter);
}
