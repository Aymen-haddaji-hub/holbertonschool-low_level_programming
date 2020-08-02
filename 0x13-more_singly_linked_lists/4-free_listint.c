#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free the list.
 * @head: Pointer to the position of the linked list (struct)
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *selected_node;
	listint_t *next_node;

	selected_node = head;

	while (selected_node != NULL)
	{
		next_node = selected__node->next;
		free(selected_node);
		selected_node = next_node;
	}
}
