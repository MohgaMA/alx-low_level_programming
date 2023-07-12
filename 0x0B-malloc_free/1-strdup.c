#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main Entry
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	int len, i;
	char *array;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
