#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode = *head;
	dlistint_t *nodeToDelete = *head;
	unsigned int idx;
	unsigned int count = 0;

	/* special case for empty list */
	if (!(*head))
		return (-1);

	/* special case for delete at the beginning */
	if (index == 0)
	{
		*head = nodeToDelete->next;
		free(nodeToDelete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* find position to delete */
	idx = index - 1;
	while (currentNode && count != idx)
	{
		count++;
		currentNode = currentNode->next;
	}

	/* general case for deleting */
	if (count == idx && currentNode)
	{
		nodeToDelete = currentNode->next;
		if (nodeToDelete->next)
		nodeToDelete->next->prev = currentNode;
		currentNode->next = nodeToDelete->next;
		free(nodeToDelete);
		return (1);
	}

	/* If the position is not found, return -1 */
	return (-1);
}
