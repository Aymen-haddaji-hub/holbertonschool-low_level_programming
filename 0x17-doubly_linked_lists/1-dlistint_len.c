#include "lists.h"
/**
 * dlistint_len - elements counter of dlistint
 *@h: Pointer
 * Return: number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
