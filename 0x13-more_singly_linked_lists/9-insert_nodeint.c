#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (NULL);
	if (idx != 0 && head == NULL)
		return (NULL);

	current = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	for (i = 0; current != NULL; i++)
		current = current->next;
	if (i == idx)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		if (i == (idx - 1))
		{
			newnode->next = current->next;
			current->next = newnode;
		}
	}
	return (newnode);
}
