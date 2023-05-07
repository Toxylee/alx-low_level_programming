#include "lists.h"

/**
 * print_dlistint - print all elements of a doubly linked list
 * @x: the head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *x)
{
	size_t counter = 0;

		if (x == NULL)
			return (0);
	while (x != NULL)
	{
		printf("%d\n", x->n);
		x = x->next;
		counter++;
	}
	return (counter);
}
