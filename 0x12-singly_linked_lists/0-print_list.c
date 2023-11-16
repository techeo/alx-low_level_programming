#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Print the contents of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_list(const list_t *head)
{
	size_t node_count;

	if (!head)
		return (0);

	node_count = 0;
	do {
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);

		head = head->next;
		node_count++;
	} while (head);

	return (node_count);
}
