#include "lists.h"
/**
 *delete_nodeint_at_index-deletes node at index of a listint_t linked list.
 *@index: position of node to be deleted
 *@head: pointer to pointer of head node
 *Return: 1 if it succeeds, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next, *current;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
