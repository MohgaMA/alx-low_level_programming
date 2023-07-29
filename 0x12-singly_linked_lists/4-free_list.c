#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head->next != NULL)
    	{
		node->str;
		node->len;
		node->next;

		if (head->next == node)
		{
			free(node->str);
		}
	}
}
