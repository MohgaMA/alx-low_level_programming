#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, n;

	if ((width || height) <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	for (i = 0; i <= height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
			
	}
	for (i = 0; i <= height; i++)
	{
		for (n = 0; n <= width; n++)
			array[i][n] = 0;
	}
	if (array == NULL)
		return (NULL);

	return (array);
}
