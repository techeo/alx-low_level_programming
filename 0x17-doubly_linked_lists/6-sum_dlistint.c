#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in the list.
 * @head: pointer to the head of the list.
 * Return: sum of all data in the list.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head;
	int sum = 0;

	while (currentNode)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);
}
