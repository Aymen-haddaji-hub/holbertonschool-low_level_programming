#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of list
 * @head: a pointer to a given list
 * @n: new element.
 * Return: pointer of new added element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
