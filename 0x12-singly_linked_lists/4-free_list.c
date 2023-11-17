#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees memory allocated for a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);

	if (head->str)
		free(head->str);

	free(head);
}
