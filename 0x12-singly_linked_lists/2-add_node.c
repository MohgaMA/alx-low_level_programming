#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *dup;
	unsigned int len;

	dup = strdup(str);
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = dup;
	newnode->len = len;
	newnode->next = *head;

	*head = newnode;

	return (newnode);

}
