#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *fnode;
	listint_t *hnode;

	if (*head == NULL)
		return (0);

	hnode = *head;

	n = hnode->n;
	fnode = hnode->next;
	free(hnode);

	hnode = fnode;

	return (n);
}
