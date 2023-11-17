#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head node of list_t.
 * @str: String to add to the content of the new node.
 *
 * Return: Pointer to the newly added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t string_length = 0;

	/* Allocate memory for a new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* Calculate the length of the string */
	while (str[string_length])
		string_length++;

	/* Assign values to the new node */
	new_node->len = string_length;
	new_node->str = strdup(str);

	/* Set the appropriate pointers for the new node */
	if (!(*head))
		new_node->next = NULL;
	else
		new_node->next = *head;

	/* Update the head pointer to the new node */
	*head = new_node;

	return (*head);
}
