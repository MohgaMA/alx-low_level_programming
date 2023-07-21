#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int total = 0, i;
	av_list sum;
	av_start(sum, n);

	for (i = 0; i < n; i++)
	{
		total = total + av_arg(sum, int);
	}
	av_end(sum);

	return (total);
