#include "lists.h"
/**
 *pop_listint- deletes the head node of a listint_t linked list
 *@head: pointer to pointer to head node
 *
 *Return:  the head node’s data (n) or (0) if list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
