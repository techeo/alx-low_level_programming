#include "lists.h"

/**
 * add_dnodeint - adds a new node.
 * @head: pointer to the first element.
 * @n: int to set in the new node.
 * Return: address of the new element.
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
