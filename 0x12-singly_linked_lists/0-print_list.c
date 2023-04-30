#include <stdio.h>
#include "lists.h"

/**
 *print_list- prints all the elements of a list_t list
 *@h: list head pointer
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}

	return (count);
}
