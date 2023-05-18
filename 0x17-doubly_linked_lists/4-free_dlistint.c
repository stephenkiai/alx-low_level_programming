#include "lists.h"
/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: pointer head to the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
