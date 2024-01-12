#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;
	dlistint_t *nextNode;

	if (head)
	{
		currentNode = head;
		nextNode = head->next;
		while (nextNode)
		{
			free(currentNode);
			currentNode = nextNode;
			nextNode = nextNode->next;
		}
		free(currentNode);
	}
}
