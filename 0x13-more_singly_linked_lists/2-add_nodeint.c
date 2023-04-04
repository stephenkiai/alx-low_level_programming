#include "lists.h"
/**
 *add_nodeint- adds a new node at the beginning of a listint_t list.
 *@n:integer to be added
 *@head: double pointer to head
 *Return: address of added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
listint_t *current;
if (head == NULL || newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
*head = newnode;
else
{
current = *head;
while (current->next)
current = current->next;
current->next = newnode;
}
return (newnode);
}
