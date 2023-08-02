#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, node;

	current = *head;

	if (index != 0)
	{
		for (i = 0; i < (index - )1 && current != NULL; i++)
		{
			current = current->next;
		}
	}

	if (current == NULL || (current->next == NULL && index != 0))
	{
		return (-1);
	}

	node = current->next;/* check this part*/

	if (index != 0)
	{
		current->next = node->next;
		free(node);
	}
	else
	{
		free(current);
		*head = node;
	}

	return (1);
}
