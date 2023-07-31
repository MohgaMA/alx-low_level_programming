#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	 listint_t *new;

	 new = malloc(sizeof(listint_t));
	 new->n = n;
	 new->next = *head;
	 *head = new;

	return (*head);
}
