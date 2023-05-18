#include "lists.h"
/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: pointer head to the doubly linked list.
 * @index: node to locate.
 *
 * Return: address of the located node or NULL If node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
