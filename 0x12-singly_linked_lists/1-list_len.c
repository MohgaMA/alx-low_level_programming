#include "lists.h"
#include <stdio.h>
/**
 * list_len - Prints all the node of list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	
	while (h)
	{
		if (h->str == null)
			printf("[0] (nil)\n");
		else
			printf("%d elements\n", h->len);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
