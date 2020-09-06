#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
