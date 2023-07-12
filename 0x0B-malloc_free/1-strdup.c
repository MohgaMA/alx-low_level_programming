#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main Entry
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	char *array;

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);
	
	int i;

	for (i = 0; i <= len; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
