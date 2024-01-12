#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node.
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentNode = *h, *newNode;
	unsigned int index, cont = 0;

	/* create node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (*h);
	}

	/* search of position to insert */
	index = idx - 1;
	while (currentNode && count != index)
	{
		count++;
		currentNode = currentNode->next;
	}

	/* general case */
	if (count == index && currentNode)
	{
		newNode->prev = currentNode;
		newNode->next = currentNode->next;
		if (currentNode->next)
			currentNode->next->prev = newNode;
		currentNode->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
