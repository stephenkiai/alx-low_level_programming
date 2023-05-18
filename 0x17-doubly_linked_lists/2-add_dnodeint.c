#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly liked list.
 * @head: pointer to head of the doubly liked list.
 * @n: integer that new node will contain.
 *
 * Return: the address of the new node or NULL If the function fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
