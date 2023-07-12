#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main Entry
 * @size: input
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else
	{
		int *m;
		int i;
		m = malloc(sizeof(c) * size);

		for (i = 0; i <= size; i++)
		{
			*(m + i)= c;
			_putchar('*(m + i)');
		}
		return (m);
	}
}
