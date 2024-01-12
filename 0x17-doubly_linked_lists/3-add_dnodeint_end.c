#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element.
 * @n: int to set in the new node.
 * Return: address of the new element.
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
		newNode->prev = current;
		current->next = newNode;
	}
	else
	{
		*head = newNode;
		newNode->prev = NULL;
	}

	return (newNode);
}
