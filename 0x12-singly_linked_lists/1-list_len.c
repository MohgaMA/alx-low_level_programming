#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t list_len(const list_t *h)
{
        size_t nodes = 0;

        while (h)
        {
                if
                        printf("%d elements", h->len);

                nodes++;
                h = h->next;
        }

        return (nodes);
}
