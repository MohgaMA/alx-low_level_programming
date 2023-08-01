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
	listint_t *fnode;
	int n;

	if (head == NULL)
		return (0);
	else
	{
		n = (*head)->n;
		fnode = (*head)->next;
		free(*head);
	}
	return (n);
}
