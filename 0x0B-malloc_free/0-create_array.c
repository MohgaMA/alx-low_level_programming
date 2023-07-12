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
	 char *m;
	 unsigned int i;

	 m = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		m[i] = c;
		_putchar(m[i]);
	}
	return (m);
}
