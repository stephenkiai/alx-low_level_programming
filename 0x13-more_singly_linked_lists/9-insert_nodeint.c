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
