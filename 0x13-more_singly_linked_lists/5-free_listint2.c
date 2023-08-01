#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *address;

	address = *head;
	
	if (head == 0 || *head == NULL)
		return;
	
	while (address)
	{
		node = address->next;
		free(address);
		address = node;
	}
	*head = NULL;
}
