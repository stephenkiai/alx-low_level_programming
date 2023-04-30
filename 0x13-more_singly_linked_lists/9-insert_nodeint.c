#include "lists.h"
/**
 *insert_nodeint_at_index- inserts a new node at a given position.
 *@head: pointer to pointer to head of first node
 *@idx: position to insert new node
 *@n: value to be stored in new node
 *Return: address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *current;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}

		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = current->next;
	current->next = new;
	return (new);
}
