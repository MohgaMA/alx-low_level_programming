#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;

	len = len - 1;
	for (i = 0; i <= len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result * 2) + (b[i] - '0');
	}
	return (result);
}
