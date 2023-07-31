#include "main.h"
/**
 * find_sqrt - returns the natural square root of a number.
 * @root: input number of the sqrt(root).
 * @para: iterator.
 * Return: square root or -1.
 */
int find_sqrt(int root, int para)
{
	int mult = para * para;
	
	if (mult == root)
		return (para);
	else if (mult < root)
		return (find_sqrt(root, para + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}
