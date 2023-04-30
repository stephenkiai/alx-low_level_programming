#include "lists.h"
/**
 *get_nodeint_at_index- returns the nth node of a listint_t linked list.
 *@head: pointer to head
 *@index: index of the node, starting at 0
 *Return: nth node of a linked list or NULL if node not existing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (i == index ? head : NULL);
}
