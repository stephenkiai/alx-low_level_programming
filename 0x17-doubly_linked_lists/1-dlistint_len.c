#include "lists.h"
/**
 * dlistint_len - prints number of elements in a doubly liked  list.
 * @h: pointer head to the doubly linked list.
 *
 * Return: number of elements in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
