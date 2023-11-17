#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *create_new_node(const char *str);

/**
 * add_node_end - Adds a new node to the end of a list.
 * @head: Pointer to pointer of a list_t.
 * @str: String to copy into the new node.
 *
 * Return: Pointer to a list_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (!(*head))
	{
		*head = create_new_node(str);
		return (*head);
	}

	if (!(*head)->next)
	{
		new_node = create_new_node(str);
		new_node->next = (*head)->next;
		(*head)->next = new_node;
	}
	else
		add_node_end(&(*head)->next, str);

	return (*head);
}

/**
 * create_new_node - Creates a new node with the given string.
 * @str: String to add to the node.
 *
 * Return: Pointer to a list_t.
 */
list_t *create_new_node(const char *str)
{
	list_t *new_node;
	size_t length;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	length = 0;
	while (str[length])
		length++;

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	return (new_node);
}
