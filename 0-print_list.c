#include "lists.h"
/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		if (h.str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", h.str);
		i++;
	}
	return (i);
}
