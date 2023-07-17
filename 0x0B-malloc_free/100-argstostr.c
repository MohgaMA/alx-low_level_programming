#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
        int i, l, k;
	int len = 0;
	char **str;

	if ( ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i <= ac; i++)
	{
		for (l = 0; av[i][l] != '\0'; l++)
			len++;
	}
	len = len + ac;
	
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < len; k + 2)
	{
		for (i = 0; i < ac; i++)
		{
			for (l = 0; l != '\0'; l++)
				str[k] = av[i][l];
				str[k + 1] = '\n';
		}
	}
	return (*str);
}
