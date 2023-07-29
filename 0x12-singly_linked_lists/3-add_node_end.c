#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tail;
	char *dup;
	unsigned int len;

	newnode = malloc(sizeof(list_t));
	tail = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	dup = strdup(str);

	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = dup;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
	}
	tail->next = newnode;
	return (newnode);
}
