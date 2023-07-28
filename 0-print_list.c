#include "lists.h"
#include <stdio.h>
/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int i;

	while (h)
	{
		if (str == NULL)
			printf("[0] (nil)");
		else
			printf("%c", h->str);
		i++;
	}
	return (i);
}
