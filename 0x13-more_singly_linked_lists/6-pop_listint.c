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
	listint_t *fnode, *hnode;
	int n;

	hnode = *head;
	if (hnode == NULL)
		return (0);

	n = hnode->n;
	fnode = hnode->next;
	free(hnode);
	return (n);
}
