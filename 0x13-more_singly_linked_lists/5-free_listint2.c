#include "lists.h"
/**
 *free_listint2- frees a listint_t list and sets head to NULL.
 *@head: pointer to pointer to head of list
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
