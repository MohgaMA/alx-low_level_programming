#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	list = head;
	while (list->next != NULL)
	{
		free(list);
		list = list->next;
	}

}
