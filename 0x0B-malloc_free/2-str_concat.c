#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Main Entry
 * @s1: input
 * @s2: input
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, n = 0;
	char *array;

	if (s1 == NULL ) 
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (*s1 != '\0')
		len1++;
	while (*s2 != '\0')
		len2++;

	array = malloc(sizeof(char) * ((len1 + len2) + 1));

	if (array == NULL)
		return(NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];

	for (n = 0; n < len2; n++, i++)
	{
		array[i] = s2[n];
	}
	array[i] = '\0';

	return (array);
}
