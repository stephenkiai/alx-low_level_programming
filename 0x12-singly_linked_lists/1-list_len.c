#include <stdio.h>
#include "lists.h"
/**
 *list_len-returns the number of elements in a linked list_t list.
 *@h: list_t head pointer
 *Return: number of elements in a list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL && h->str != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
