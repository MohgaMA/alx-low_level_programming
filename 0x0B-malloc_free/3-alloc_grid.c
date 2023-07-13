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

	if (width || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * (width * height));

	for (i = 0; i < width; i++)
	{
		array[i] = 0;

		for (n = 0; n < height; n++)
		{
			array[n] = 0;
		}
	}
	if (array == NULL)
		return (NULL);

	return (array);
}
